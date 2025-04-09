// This program is meant to count the number of students in class and determine which should be at the end.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int counter = 0; //Starts the number of students.
    string filename, lineA, lineB, lineC, firstName, finalName; //Sets up the necessary strings.
    filename = "LineUp.txt"; //Sets the file to read.
    ifstream inFile(filename); //Opens the file to read.
    if (!inFile) //Error message in case it can't open.
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    if (inFile.peek() != EOF) {
        getline(inFile, lineA); //Reads the first line and names it.
        getline(inFile, lineB); //Reads the second line and names it.
        counter += 2; //Because the program reads twice to start, counter needs to update by two.
        if (lineA < lineB) //Compares the first two lines and assigns them accordingly.
        {
            finalName = lineB; //Names them based on which comes later.
            firstName = lineA;
        }
        else {
            finalName = lineA; //Names the lines based on which comes later.
            firstName = lineB;
        };
    };
    while (inFile.peek() != EOF)
    {
        getline(inFile, lineC); //Reads the later lines and names them. 
        if (lineC > finalName) {
            //Compares the file to the current last name and changes it to the last name if it is.
            finalName = lineC; 
        };
        if (lineC < firstName) {
            //Compares the file to the current first name and changes it to the first name if it is.
            firstName = lineC;
        }
        counter += 1; //Adds one to the number of children each loop.
    };
    cout << "There are " << counter << " children in the class" << endl; //Displays the number of children in the class.
    cout << firstName << " is the first kid in line." << endl; //Displays the first name alphabetically.
    cout << finalName << " is the last kid in line." << endl; //Displays the last name alphabetically.
    inFile.close(); //Closes the file.
    return 0;
}