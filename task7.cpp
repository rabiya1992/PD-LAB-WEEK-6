#include <iostream>
using namespace std;

int conversion(int hours, int minutes);
string difference(int time1, int time2);

main()
{
    int examHours;
    int examMins;
    int arrivalHours;
    int arrivalMins;
    int examTotalMinutes;
    int arrivalTotalMinutes;
    int totalTime;
    int remainingHours;
    int remainingMinutes;    

   

    cout << "Exam starting time in hour:  ";
    cin >> examHours;
    cout << "Exam starting time in minutes:  ";
    cin >> examMins;
    cout << "Student hour of arrival:  ";
    cin >> arrivalHours;
    cout << "Student minutes of arrival:  ";
    cin >> arrivalMins;

    examTotalMinutes = conversion(examHours, examMins);
    arrivalTotalMinutes = conversion(arrivalHours, arrivalMins);
    totalTime = examTotalMinutes - arrivalTotalMinutes;
    remainingHours = (totalTime / 60) % 24;
    remainingMinutes = totalTime % 60;

    if (totalTime == 0)
    {
        cout << "On Time";
    }

    else if (totalTime > 0 && totalTime <= 30)
    {
        cout << "On Time" << endl;
        cout << remainingMinutes << " minutes before the start";
    }

    else if (totalTime > 30)
    {
        if (remainingHours == 0)
        { 
            cout << "Early" <<endl;
            cout << remainingMinutes << " minutes before the start";
        }
        else
        {
            cout << "Early" <<endl;
            cout << remainingHours << ":" << remainingMinutes << " hours before the start";
        }
    }

    else
    {
        remainingMinutes = -remainingMinutes;
        remainingHours = -remainingHours;

        if (remainingHours == 0)
        { 
            cout << "Late" <<endl;
            cout << remainingMinutes << " minutes after the start";
        }

        else
        {
            cout << "Late" <<endl;
            cout << remainingHours << ":" << remainingMinutes << " hours after the start";
        }
    }
}

int conversion(int hours, int minutes)
{
    int time;
    time = (hours * 60) + minutes;
    return time;
}