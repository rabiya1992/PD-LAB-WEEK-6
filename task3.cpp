#include <iostream>
using namespace std;

string zodiacSign(int date, string month);


main()
{int date;
 string month;
 string sign;

 cout << "Enter the date: ";
 cin >> date;
 cout << "Enter the month name: ";
 cin >> month;

 sign = zodiacSign(date, month);
 cout << "Your zodiac sign is: " <<sign;

}


string zodiacSign(int date, string month)
{string zodiac;

   if(date >= 21 && month == "March" )
   {
     zodiac = "Aries";
   }

   if(date <= 19 && month == "April")
   {
     zodiac = "Aries";
   }
   
   if(date >= 20 && month == "April" )
   {
     zodiac = "Taurus";
   }

   if(date <= 20 && month == "May")
   {
     zodiac = " Taurus ";
   }

    if(date >= 21 && month == "May" )
   {
     zodiac = "Gemini";
   }

   if(date <= 20 && month == "June")
   {
     zodiac = " Gemini ";
   }
   
   if(date >= 21 && month == "June" )
   {
     zodiac = "Cancer";
   }

   if(date <= 22 && month == "July")
   {
     zodiac = " Cancer ";
   }

   if(date >= 23 && month == "July" )
   {
     zodiac = "Leo";
   }

   if(date <= 22 && month == "August")
   {
     zodiac = " Leo ";
   }

   if(date >= 23 && month == "August" )
   {
     zodiac = "Virgo";
   }

   if(date <= 22 && month == "September")
   {
     zodiac = " Virgo ";
   }

   if(date >= 23 && month == "September" )
   {
     zodiac = "Libra";
   }

   if(date <= 22 && month == "October")
   {
     zodiac = " Libra ";
   }
   
   if(date >= 23 && month == "October" )
   {
     zodiac = "Scorpio";
   }

   if(date <= 21 && month == "November")
   {
     zodiac = " Scorpio ";
   }

    if(date >= 22 && month == "November" )
   {
     zodiac = "Sagitarius";
   }

   if(date <= 21 && month == "December")
   {
     zodiac = " Sagitarius ";
   }
   
   if(date >= 22 && month == "December" )
   {
     zodiac = " Capricon ";
   }

   if(date <= 19 && month == "January")
   {
     zodiac = " Capricon ";
   }

   if(date >= 20 && month == "January" )
   {
     zodiac = " Aquarius ";
   }

   if(date <= 18 && month == "February")
   {
     zodiac = " Aquarius ";
   }

     if(date >= 19 && month == "February" )
   {
     zodiac = " Pisces ";
   }

   if(date <= 20 && month == "March")
   {
     zodiac = " Pisces ";
   }

 return zodiac;
 
}

