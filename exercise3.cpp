/*
Write a program that picks a random number from 0-50. 
It then asks the user what they think the number is. 
    - If the user is correct, the program prints "congratulations!" and exits. 
    - If the user is incorrect, the program tells them whether their guess is too low, or too high. 
The program repeats this until the user is correct.
*/

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
