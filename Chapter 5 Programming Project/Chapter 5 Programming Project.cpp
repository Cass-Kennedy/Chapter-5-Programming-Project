// This program is meant to count the number of students in class and determine which should be at the end.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int counter = 0;
    int interval, number, startingYear;
    string filename;
    cout << "Please enter the name of the file with your town's population ";
    cin >> filename;
    cout << "Please enter the starting year for this data ";
    cin >> startingYear;
    cout << "Please enter the interval between the measurements ";
    cin >> interval;
    ifstream inFile(filename);
    if (!inFile)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    while (inFile.peek() != EOF) {
        cout << startingYear << ": ";
        if (inFile >> number) {
            number = number / 1000;
            for (int i = 0; i <= number; i++) {
                cout << "*";
            };
        };
        cout << endl;
        startingYear += interval;
    };
    inFile.close();
    return 0;
}