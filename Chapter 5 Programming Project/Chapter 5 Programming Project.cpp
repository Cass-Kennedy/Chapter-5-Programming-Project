// This program is meant to count the number of students in class and determine which should be at the end.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int counter = 0;
    string filename, lineA, lineB, lineC, firstName, finalName;
    filename = "Lineup.txt";
    ifstream inFile(filename);
    if (inFile)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    if (inFile.peek() != EOF) {
        getline(inFile, lineA);
        getline(inFile, lineB);
        counter += 2; //Because the program reads twice to start, counter needs to update by two.
        if (lineA < lineB)
        {
            finalName = lineB;
            firstName = lineA;
        }
        else {
            finalName = lineA;
            firstName = lineB;
        };
    };
    while (inFile.peek() != EOF)
    {
        getline(inFile, lineC);
        if (lineC < finalName) {
            finalName = lineC; 
        };
        if (lineC > firstName) {
            firstName = lineC;
        }
        counter += 1; //Adds one to the number of children each loop.
    };
    cout << "There are " << counter << " children in the class" << endl;
    cout << firstName << " is the first kid in line." << endl;
    cout << finalName << " is the last kid in line." << endl;
    inFile.close();
    return 0;
}