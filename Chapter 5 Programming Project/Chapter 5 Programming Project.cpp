// This program is meant to display a couple of certain patterns.

#include <iostream>
#include <random>
using namespace std;
int main()
{   
    int targetNumber, guessNumber;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 9999);
    targetNumber = dist(gen);
    cout << "Please guess a number! It will be an interger below 10,000." << endl;
    cin >> guessNumber;
    while (targetNumber != guessNumber) 
    {
        if (targetNumber > guessNumber) {
            cout << "That's too low! Try again!" << endl;
            cin >> guessNumber;
        };
        if (targetNumber < guessNumber) {
            cout << "That's too high! Try again!" << endl;
            cin >> guessNumber;
        };
    };
    if (targetNumber == guessNumber) {
        cout << "Congratulations! You found the number!";
    }
    return 0;
}