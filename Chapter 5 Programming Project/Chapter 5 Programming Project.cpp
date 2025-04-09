// This program is meant to display a couple of certain patterns.

#include <iostream>
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
    cout << endl;
    int index = 9;
    while (index >= 0)
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