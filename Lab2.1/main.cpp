#include "AlphaString.h"
#include <iostream>
#include <limits>

using namespace std;

int main() {
    string userInput;

    cout << "Enter a string (letters only): ";
    getline(cin, userInput);

    AlphaString userString(userInput);

    cout << "\nOriginal string: " << userString.getValue()
        << "\nLength: " << userString.length() << endl;

    if (userString.length() > 0) {
        userString.shiftRight();
        cout << "After shifting: " << userString.getValue() << endl;
    }
    else {
        cout << "Error: String must contain only letters!" << endl;
    }

    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}