#include <iostream>
using namespace std;

string activity(string temperature, string humidity);


main()
{string temperature;
 string humidity;
 string answer;

 cout << "Enter the temperature value  ";
 cin >> temperature;
 cout << "Enter the humidity value  ";
 cin >> humidity;

answer = activity(temperature, humidity);
cout << answer;

}


string activity(string temperature, string humidity)
{string value;
    if(temperature == "warm" && humidity == "dry")
    {
        value = "Play Tennis";
    }

   if(temperature == "warm" && humidity == "humid")
   {
        value = "swim";
   }

   if(temperature == "cold" && humidity == "dry")
   {
       value = "Play BasketBall";
   }

   if(temperature == "cold" && humidity == "humid")
   {
       value = "Watch tv ";
   }

return value;

}

