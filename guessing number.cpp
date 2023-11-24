#include <iostream>
#include <ctime> 

using namespace std;

int main() {
    srand(time(0)); 

    int randomNumber = rand() % 100 + 1; 
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}

