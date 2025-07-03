
#include <iostream>
#include <string>
using namespace std;

int main() {
    int random = rand() % 51;
    cout << "Guess the number (between 0 and 50)!" << endl;
    int guess;

    do {
        cin >> guess;
        if (guess > random) {
            cout << "Too high!" << endl;
        } else if (guess < random) {
            cout << "Too low!" << endl;
        } else {
            cout << "You got it!!" << endl;
        }
    } while (guess != random);
}
