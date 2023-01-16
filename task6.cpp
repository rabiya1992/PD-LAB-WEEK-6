#include <iostream>
using namespace std;

float studio(int stays, string month);
float apartment(int stays, string month);



main()
{int stays;
 string month;
 float total;

 float calculation1;
 float calculation2;

 cout << "The number of stays: ";
 cin >> stays;
 cout << "The number of month: ";
 cin >> month;

calculation1 = studio ( stays, month);
cout << "Studio price is: " <<calculation1 <<endl;

calculation2 = apartment(stays, month);
cout << "Apartment price is: " << calculation2 <<endl;




}


float studio(int stays, string month)
{float total;
 float discount;
 

    if((month == "May" || month == "October") && (stays > 7 && stays < 14))
    {
        total = stays * 50.00;
        discount = (total - ((total * 5)/100)) ;
    }

     if((month == "May" || month == "October") && (stays > 14))
    {
        total = stays * 50.00;
        discount = (total - ((total * 30)/100)) ;
    }

    

    if((month == "June" || month == "September") && (stays > 14) )
     {
        total = stays * 75.20;
        discount = (total - ((total * 20)/100)); 
     }

    if((month == "June" || month == "September") && (stays <= 14))
    {
        total = stays * 75.02;
        discount = total;
    }

    if((month == "July" || month == "August") && (stays <= 7 || stays >= 14))
    {
        total = stays * 76.00;
        discount = total;
    }
     
     return discount;
 
}




float apartment(int stays, string month)
{float total1;
 float discount1;
 

    if((month == "May" || month == "October") && stays > 14 )
    {
         total1 = stays * 65.00;
         discount1 = (total1 - ((total1 * 10)/100));
    }

    if((month == "June" || month == "September") && stays > 14)
     {
        total1 = stays * 68.70;
        discount1 = (total1 - ((total1 * 10)/100));
     }

    if((month == "June" || month == "September") && stays <= 14)
     {
        total1 = stays * 68.70;
        discount1 = total1;
     }

    if((month == "July" ||  month == "August") && stays > 14)
    {
        total1 = stays * 77.00;
        discount1 = (total1 - ((total1 * 10)/100));
    }
     
     return discount1;
 
}



