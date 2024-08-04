// Write a program to read multiple lines of text from keyboard.(String in C++)
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str;
    vector<string> lines;

    cout << "Enter multiple lines of text:" << endl;

    while (true) {
        getline(cin, str);
        if (str.empty() || str == "quit" || "die") {
            break;
        }
        lines.push_back(str);
    }

    cout << "You entered the following lines:" << endl;
    for (string a : lines) {
        cout << a << endl;
    }

}