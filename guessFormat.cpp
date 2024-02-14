#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int a, i;
    int random;
    srand(time(0));

    cout << "\t\t\t-------------- WELCOME TO THE GUESSING GAME -------------- \n";

    cout << "\t\tYou have three chances to guess the number between 1-10\n";

    for (i = 1; i <= 3; i++) {
        cout << "\n\n\n\t\t\t\t\tEnter your guess (1-10): ";
        cin >> a;
        random = rand() % 10 + 1; // Generate a random number between 1 and 10

        if (a == random) {
            cout << "Congratulations, you won! 🎉\n";
            cout << "                      \\o/\n"; // Display a celebration
            break;
        } else {
            cout << "Nope, try again.\n";
        }

        if (i == 3 && a != random) {
            cout << "You lost. 😔\n";
            cout << "            -\n";
        }
    }

    return 0;
}
