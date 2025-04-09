// This program is a rudimentary way to calculate the expected population after a certain number of days.

#include <iostream>
using namespace std;
int main()
{
    float populationCount, days, avgGrowth; //Starting population, amount of time, and average growth rate for the organisms
    cout << "How many organisms are in the original population? "; //Series of prompts and inputs for and from the user.
    cin >> populationCount;
    cout << "What is the average rate of growth for the organisms as a percentage? ";
    cin >> avgGrowth;
    cout << "How many days does this group grow? ";
    cin >> days;
    if (avgGrowth > 1 && avgGrowth <= 100) //Controls the input of the user by making it into the right range if they put it in as an integer.
    {
        avgGrowth = (avgGrowth / 100.00);
    };
    if (avgGrowth > 0 && avgGrowth < 1) 
    {
        avgGrowth += 1;//Changes the growth rate so it fits better in the formula.
    };
    if (populationCount < 2 || days < 1 || avgGrowth < 0 || avgGrowth > 100) //Sets up an error message for incorrect data.
    {
        cout << "Please enter a valid population, time, and growth rate.";
    }
    else {
        for (int i = 0; i <= days; i++) //Runs the loop a number of times based on user input.
        {
            cout << " The population on day " << i << " is " << populationCount << endl; //Displays the day and corresponding population.
            populationCount = populationCount*avgGrowth; //Increases population for the next run.
        };
    } 
    return 0;
}