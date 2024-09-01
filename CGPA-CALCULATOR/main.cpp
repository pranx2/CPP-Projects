/* 
A SIMPLE CLI TYPE CALCULATOR WHICH CALCULATE THE POINT GRADE AND RETURN THE GRADES;
USER INPUT:
        - grade
        - credit
PROGRAM OUTPUT:
        - Grade point
        - Grade Sheet
Program by Pranto 09-01-2024
 */

#include<iostream>
using namespace std;
void CC();//CGPA Chart;
void ms(int TotalCourses);//marks Store;
void cgpa(float TotalMarks, float TotalCredit);//calculating CGPA;
int main(){
  int nc = 0; //Number of Courses;
  int arr[nc];//Courses marks;
  cout<<"Welcome to CGPA Calculator."<<endl;
  cout<<"How many courses do you have taken? :";
  cin>>nc;
  switch (nc)
  {
  case 3:
    cout<<"Enter your 3 subject grade : "<<endl;
    ms(nc);
    break;
  case 4:
    cout<<"Enter your  4 subject grade : "<<endl;
    ms(nc);
    break;
  case 5:
    cout<<"Enter your  5 subject grade : "<<endl;
    ms(nc);
  break;
  case 6:
    cout<<"Enter your  6 subject grade : "<<endl;
    ms(nc);    
  break;
  case 7:
    cout<<"Enter your  7 subject grade : "<<endl;
    ms(nc);
  break;
  case 8:
    cout<<"Enter your  8 subject grade : "<<endl;
    ms(nc);
  break;
  case 9:
    cout<<"Enter your  9 subject grade : "<<endl;
    ms(nc);
  break;
  default:
    cout<<"Enter THe Valid number."<<endl;
    break;
  }
  CC();
  return 0;
}
void CC(){//CGPA Grading point  system;
cout<<"Do you want to see the grade sheet (y/n) : ";
string userInput;
cin>>userInput;
if(userInput == "y" ||  userInput == "Y"){
  cout<<"Marks | 80 - 100 | 'A+'  Grade point '4.00' "<<endl;
  cout<<"Marks | 75 - 79  | 'A'   Grade point '3.75' "<<endl;
  cout<<"Marks | 70 - 74  | 'A-'  Grade point '3.50' "<<endl;
  cout<<"Marks | 65 - 69  | 'B+'  Grade point '3.25' "<<endl;
  cout<<"Marks | 60 - 64  | 'B'   Grade point '3.00' "<<endl;
  cout<<"Marks | 55 - 59  | 'B-'  Grade point '2.75' "<<endl;
  cout<<"Marks | 50 - 54  | 'C+'  Grade point '2.50' "<<endl;
  cout<<"Marks | 45 - 49  | 'C'   Grade point '2.25' "<<endl;
  cout<<"Marks | 40 - 44  | 'D'   Grade point '2.00' "<<endl;
  cout<<"Marks | 0 - 39   | 'F'   Grade point '0.00' "<<endl;
  }
  else cout<<"\nThanks for using this program.\n Program Quit..."<<endl;
  cout<<"Develop by Pranto || 09-01-2024"<<endl;
  cin>>userInput;
} 

void cgpa(float TotalMarksGrade, float TotalCredit){
  float Grade = TotalMarksGrade/(float)TotalCredit;
  cout<<"Your total grade is : "<<Grade<<endl;
  cout<<"Letter grade : ";
  if(3.00 <= Grade ) cout<<"FIRST CLASS"<<endl;
  else if(2.00 <= Grade ) cout<<"SECOND CLASS"<<endl;
  else if(1.00 <= Grade ) cout<<"THIRD CLASS"<<endl;
}

//calculating  CGPA;
void ms(int TotalCourses){
  float arrMarksGrade[TotalCourses], arrCredit[TotalCourses];
  float sumMarks = 0, SumCredit = 0;
  for(int i = 0,j = 0; i < TotalCourses, j < TotalCourses; i++,j++){
      cout<<"Enter the "<<i+1<<" course grade : ";
      cin>>arrMarksGrade[i];
      cout<<"Enter the "<<j+1<<" course credit : ";
      cin>>arrCredit[j];
      sumMarks += (arrMarksGrade[i] * arrCredit[j]); //Course Credit * marks points;
      SumCredit += arrCredit[j];
    }
  cgpa(sumMarks, SumCredit);
}
