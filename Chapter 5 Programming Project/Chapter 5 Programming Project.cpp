// This program is meant to display a couple of certain patterns.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{   
    int index = 9;
    while (index <= 0)
    {
        for (int count = index; count >= 0; count--)
        {
            cout << "+";
        };
        cout << endl;
        --index;
    };
    return 0;
}