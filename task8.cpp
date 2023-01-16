#include <iostream>
using namespace std;


string figure(int h, int x, int y);

main()
{
    int h;
    int x;
    int y;
    string result;

    cout << "Enter value of h:  ";
    cin >> h;
    cout << "Enter value of x:  ";
    cin >> x;
    cout << "Enter value of y:  ";
    cin >> y;

    result = figure(h, x, y);
    cout << result << endl;
}

string figure(int h, int x, int y)
{
    if ((x >= 0 && x <= (3 * h)) && (y >= 0 && y <= h))
    {
        if (x % h == 0 && y % h == 0)
        {
            return "Border";
        }
        else
        {
            return "Inside";
        }
    }

    else if ((x >= h && x <= (2 * h)) && ( y >= h && y <= (h * 4)))
    {
        if (x % h == 0 && y % h == 0)
        {
            return "Border";
        }
        else
        {
            return "Inside";
        }
    }
    else
    {
        return "Outside";
    }
}