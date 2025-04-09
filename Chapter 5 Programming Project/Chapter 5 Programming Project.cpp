// This program is meant to count the number of students in class and determine which should be at the end.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int counter = 0;
    int interval, number;
    string filename, lineA, lineB, lineC, finalName;
    cout << "Please enter the name of the file with your town's population ";
    cin >> filename;
    cout << "Please enter the interval between the measurements ";
    cin >> interval;
    ifstream inFile(filename);
    if (!inFile)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    while (inFile.peek() != EOF) {
        if (inFile >> number) {
            number = number / 1000;
            for (int i = 0, i )
       }
    };
    cout << "There are " << counter << " children in the class" << endl;
    cout << finalName << " is the last kid in line." << endl;
    inFile.close();
    return 0;
}