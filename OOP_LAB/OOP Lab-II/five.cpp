//  WAP that inputs an ASCII value from the keyboard and displays its corresponding character on the screen.
// (Type Conversion)

#include<iostream>
using namespace std;

int main() {
    int asciiValue;

    cout << "Enter a ASCCi value from(1-127): ";
    cin >> asciiValue;

    char character = static_cast<char>(asciiValue);
    cout << character;
}