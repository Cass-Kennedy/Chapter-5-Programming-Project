// This program is meant to display a couple of certain patterns.

#include <iostream>
#include <random>
using namespace std;
int main()
{   
    int targetNumber, guessNumber;
    //The next few lines set up a random number.
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 9999);
    targetNumber = dist(gen); //Sets the goal for the game.
    cout << "Please guess a number! It will be an interger below 10,000." << endl; //Prompting the user.
    cin >> guessNumber; //Initial guess.
    while (targetNumber != guessNumber) //As long as the user's guess is wrong, this loop will run.
    {
        if (targetNumber > guessNumber) {
            cout << "That's too low! Try again!" << endl; //Gives feedback if the guess was too low.
            cin >> guessNumber; //Allows the user to guess again.
        };
        if (targetNumber < guessNumber) {
            cout << "That's too high! Try again!" << endl; //Gives feedback if the guess was too high.
            cin >> guessNumber; //Allows the user to guess again.
        };
    };
    if (targetNumber == guessNumber) {
        cout << "Congratulations! You found the number!"; //Congratulates the user for winning the game.
    }
    return 0;
}