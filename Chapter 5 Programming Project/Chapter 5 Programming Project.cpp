// This program is meant to display a couple of certain patterns.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{   
    int i = 0;
    while (i <= 9) 
    {
        for (int counter = 0; counter <= i; counter++)
        {
            cout << "+";
        };
        cout << endl;
        ++i;
    };

    int index = 9;
    while (index <= 0)
    {
        for (int count = 1; count >= 0; count--)
        {
            cout << "+";
        };
        cout << endl;
        --i;
    };
    return 0;
}