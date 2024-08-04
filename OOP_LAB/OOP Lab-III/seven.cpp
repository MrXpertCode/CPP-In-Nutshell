#include <iostream>

int Convert(char character = '%') {
    int ConvertedAscii = static_cast<int>(character);
    return ConvertedAscii;
}


int main() {
    char character;

    std:: cout << "Wanna find what specific character represents in ASCII Value ??\n\n"
    << "Then Enter a Character here--> ";
    std:: cin >> character;

    std:: cout << "Given character " << character << " Represents ASCII value "
    << Convert();
}