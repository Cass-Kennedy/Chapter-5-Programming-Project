/* This program is meant to represent the population of a town through a bar chart.
This expects the user to put their own file in.*/
#include <iostream>
#include <fstream>
#include <string> //Setting up for the program.
using namespace std;
int main()
{
    int interval, number, startingYear; //Setting up the variables needed for the user to input the numbers.
    string filepath; //Allowing the user to add their own file.
    // A series of prompts and inputs for and from the user. Gets the file path, the starting year, and how many years between points on the chart.
    cout << "Please enter the path of the file with your town's population "; 
    cin >> filepath;
    cout << "Please enter the starting year for this data ";
    cin >> startingYear; 
    cout << "Please enter the interval between the measurements ";
    cin >> interval;
    ifstream inFile(filepath); //Reads the file.
    if (!inFile) //Displays an error if it fails to read the file.
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    while (inFile.peek() != EOF) {
        if (inFile >> number) //Sets up a way to read the numbers in the file.
        {
            number = number / 1000; //Converts the number in the file to the number of stars there should be.
            cout << startingYear << ": "; ; // Displays the year for each line.
            for (int i = 0; i <= number; i++) {
                cout << "*";
            }; //Displays the stars.
        };
        cout << endl; //Formatting
        startingYear += interval; //Increments the years.
    };
    inFile.close(); //Closes the file.
    return 0;
}