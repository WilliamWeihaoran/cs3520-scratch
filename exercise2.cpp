#include <iostream>
#include <fstream>
#include <sstream> 

#include <string>

#include <iomanip>

using namespace std;

int main() {
    cout << "Enter a decimal number: ";
    double number;
    cin >> number;
    
    if (cin.good()) {
        cout << right
             << setw(10)
             << fixed
             << setprecision(5)
             << number
             << endl;
    }

    if (cin.fail()) {
        string str;
        cin.clear();
        cin >> str;
        ofstream ("out.txt") << str;
    }
}
