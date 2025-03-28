#include <iostream>
#include "String.h"

int main() {
    CustomString CB1, CB2, CB3;
    std::string input;

    std::cout << "Enter string for CB2: ";
    std::cin >> input;
    CB2 = CustomString(input);

    std::cout << "Enter string for CB3: ";
    std::cin >> input;
    CB3 = CustomString(input);

    // Удваиваем каждый символ CB3
    std::string doubledString;
    for (char c : CB3.getValue()) {
        doubledString += c;
        doubledString += c;
    }
    CB3 = CustomString(doubledString);

    // Складываем CB2 и CB3
    CB1 = CB2 + CB3;

    // Вывод результатов
    std::cout << "CB1 (CB2 + CB3): " << CB1.getValue() << std::endl;
    std::cout << "CB3 doubled: " << CB3.getValue() << std::endl;

    return 0;
}
