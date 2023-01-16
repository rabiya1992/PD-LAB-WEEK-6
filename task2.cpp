#include <iostream>
using namespace std;

string grade(float percentage);

main()
{
 string name;   
 float marks1;
 float marks2;
 float marks3;
 float marks4;
 float marks5;
 float totalMarks;
 float percentage;
 string grading;

 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter English marks: ";
 cin >> marks1;
 cout << "Enter Maths marks: ";
 cin >> marks2;
 cout << "Enter Chemistry marks: ";
 cin >> marks3;
 cout << "Enter Social Science marks: ";
 cin >> marks4;
 cout << "Enter Biology marks: ";
 cin >> marks5;

 totalMarks = (marks1 + marks2 + marks3 + marks4 + marks5);
 cout << "The totalMarks are: " << totalMarks <<endl;
  
 percentage = (totalMarks / 500) * 100;
 cout << "Percentage is: " <<percentage <<endl;

 grading = grade(percentage);
 cout << "Your grade is: " <<grading <<endl;
}


string grade(float percentage)
{string g;

     g = " u";
   if(percentage <= 100 && percentage > 90)
   {
     g = " A+ ";
   }

   if(percentage <= 90 && percentage > 80)
   {
     g = " A ";
   }

   if(percentage <= 80 && percentage > 70)
   {
     g = " B+ ";
   }

   if(percentage <= 70 && percentage > 60)
   {
    g = " B ";
   }

   if(percentage <= 60 && percentage > 50)
   {
    g = " C ";
   }

   if(percentage <= 50 && percentage > 40)
   {
    g = " D ";
   }

   if(percentage < 40)
   {
    g = " F ";
   }

   return g;


}