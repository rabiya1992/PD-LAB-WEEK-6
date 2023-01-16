#include <iostream>
using namespace std;

float chargesRegular(char serviceCode, int minutes);
float chargesPremium(char serviceCode, int minutes, char time);



main()
{char serviceCode;
 int minutes;
 char time;
 float totalChargeRegular;
 float totalChargePremium;


 cout << "Enter which type of customer you are (Residential or Premium) select (r / p) ";
 cin >> serviceCode;
 cout << "Enter number of mins you used the service : ";
 cin >> minutes;
 cout << "(Press 'D' for day time and 'N' for night time) call: ";
 cin >> time;

 
totalChargeRegular = chargesRegular (serviceCode, minutes);
totalChargePremium = chargesPremium (serviceCode, minutes, time);

if(serviceCode == 'p')
{
    cout << "The charges are: " << totalChargePremium <<endl ;
}

if(serviceCode == 'r')
{
    cout << "The charges are: " << totalChargeRegular <<endl;
}

}

float chargesRegular(char serviceCode, int minutes)
{int number1;
 float extraMin1;
 float plus1;

if(serviceCode == 'r')
 {
   if(minutes > 50)
   {
     number1 = minutes - 50;
     extraMin1 = (number1 * 0.20);
     plus1 = (extraMin1 + 10.00); 
   }

   if(minutes <= 50)
   {
    extraMin1 = 10.00;
    plus1 = extraMin1;
   }
 }
 return plus1;
}



float chargesPremium(char serviceCode, int minutes, char time)
{ int number2;
  float extraMin2;
  float plus2;



 if(serviceCode == 'p')
 {
   if(time == 'D' && minutes > 75)
   {
    number2 = minutes - 75;
    extraMin2 = (number2 * 0.10);
    plus2 = (extraMin2 + 25.00);
   } 

   else if(time == 'N' && minutes > 100)
   {
    number2 = minutes - 100;
    extraMin2 = (number2 * 0.05);
    plus2 = (extraMin2 + 25.00);
   }

   else if(minutes <= 75 && time == 'D')
   {
    
    plus2 = 25.00;
   }

   else if (minutes <= 100 && time == 'N')
   {
   
    plus2 = 25.00;
   }


 }

 return plus2;

}