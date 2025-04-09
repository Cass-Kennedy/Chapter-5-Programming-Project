// This program is meant to display a couple of certain patterns.

#include <iostream>
using namespace std;
int main()
{   
    int i = 0; //Sets the start of the loop.
    while (i <= 9) //Sets the end of the loop.
    {
        // Runs a number of times based on how many times the process has happened before. Increases the size of subsequent rows.
        for (int counter = 0; counter <= i; counter++) 
        {
            cout << "+"; //Writes a pip each time.
        };
        cout << endl; //Formatting.
        ++i; //Moves the program towards the end and helps stop it from being infinite.
    };
    cout << endl; //Spacing.
    int index = 9; //Sets the start of the loop.
    while (index >= 0) //Sets the end of the loop.
    {
        //Runs a number of times based on the initial condition.
        for (int count = index; count >= 0; count--) //Counts down so the size of each rows decreases.
        {
            cout << "+"; //Writes one pip every time.
        };
        cout << endl;
        --index; //Moves the program towards the end.
    };
    return 0;
}