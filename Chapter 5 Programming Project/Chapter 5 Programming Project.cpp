// This program is meant to count the number of students in class and determine which should be at the end.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int counter = 0;
    string filename, lineA, lineB, finalName;
    filename = "Lineup.txt";
    ifstream inFile(filename);
    if (inFile)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    while (inFile.peek() != EOF)
    {
        getline(inFile, lineA);
        getline(inFile, lineB);
        counter+=2; //Because the program reads twice, counter needs to update by two.
        if (lineA < lineB)
        {
            finalName = lineB;
        }
        else {
            finalName = lineA;
        };
    };
    cout << "There are " << counter << " children in the class" << endl;
    cout << finalName << " is the last kid in line." << endl;
    inFile.close();
    return 0;
}