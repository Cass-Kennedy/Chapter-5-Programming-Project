// This program is a rudimentary way to calculate the expected population after a certain number of days.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float populationCount, days, avgGrowth,euler; //Starting population, amount of time, and average growth rate for the organisms
    euler = 2.71828;
    cout << "How many organisms are in the original population? ";
    cin >> populationCount;
    cout << "What is the average rate of growth for the organisms as a percentage? ";
    cin >> avgGrowth;
    cout << "How many days does this group grow? ";
    cin >> days;
    if (avgGrowth > 0 && avgGrowth < 1)
    {
        avgGrowth += 1;
    };
    if (avgGrowth > 1 && avgGrowth <= 100)
    {
        avgGrowth = (avgGrowth / 100.00) + 1;
    };
    if (populationCount < 2 || days < 1 || avgGrowth < 0 ) {
        cout << "Please enter a valid population, time, and growth rate.";
    }
    else {
        for (int i = 0; i <= days; i++) {
            cout << " The population on day " << i << " is " << populationCount << endl;
            populationCount *= pow(euler, avgGrowth);
        };
    } 
    return 0;
}