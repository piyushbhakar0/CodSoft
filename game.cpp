#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    do {
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again: ";
        } else if (guess < number) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed it right!" << endl;
        }
    } while (guess != number);

    return 0;
}