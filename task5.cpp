#include <iostream>
using namespace std;

float priceWeekDays(string fruit, string day, float quantity);
float priceWeekEnds(string fruit, string day, float quantity);


main()
{string fruit;
 string day;
 float quantity;
 float weekdays;
 float weekends; 

 cout << "Enter the fruit name: ";
 cin >> fruit;
 cout << "Enter the day: ";
 cin >> day;
 cout << "Enter the quantity: ";
 cin >> quantity;

 weekdays = priceWeekDays(fruit, day, quantity);
 weekends = priceWeekEnds(fruit, day, quantity);


 if(day == "Sunday" || day == "Saturday")
 {
    cout << "The price is: " << weekends <<endl;
 }

 if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
 {
    cout << "The price is: " << weekdays <<endl;
 }

}



float priceWeekEnds(string fruit, string day, float quantity)
{float calculate1;
    if(day == "Sunday" || day == "Saturday")
    {
        if(fruit == "banana")
        {
          calculate1 =  (quantity * 2.70 );   
        }
        
        else if(fruit == "apple")
        {
          calculate1 =  (quantity * 1.25 );   
        }

        else if(fruit == "orange")
        {
          calculate1 =  (quantity * 0.90 );   
        }
        
        else if(fruit == "grapefruit")
        {
          calculate1 =  (quantity * 1.60 );   
        }

        else if(fruit == "kiwi")
        {
          calculate1 =  (quantity * 3.00 );   
        }

        else if(fruit == "pineapple")
        {
          calculate1 =  (quantity * 5.60 );   
        }

        else if(fruit == "grapes")
        {
          calculate1 =  (quantity * 4.20 );   
        }
        
        else
        {
            calculate1 = 0;
        }
        
    }
    return calculate1;

}


float priceWeekDays(string fruit, string day, float quantity)
{float calculate2;
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if(fruit == "banana")
        {
          calculate2 =  (quantity * 2.50 );   
        }
        
        else if(fruit == "apple")
        {
          calculate2 =  (quantity * 1.20 );   
        }

        else if(fruit == "orange")
        {
          calculate2 =  (quantity * 0.85 );   
        }
        
        else if(fruit == "grapefruit")
        {
          calculate2 =  (quantity * 1.45 );   
        }

        else if(fruit == "kiwi")
        {
          calculate2 =  (quantity * 2.70 );   
        }

        else if(fruit == "pineapple")
        {
          calculate2 =  (quantity * 5.50 );   
        }

        else if(fruit == "grapes")
        {
          calculate2 =  (quantity * 3.85 );   
        }

       else
       {
         calculate2 = 0;
       }

    }

    return calculate2;

}