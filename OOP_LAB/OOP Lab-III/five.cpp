#include <iostream>

#define FINDCUBE(a)                                  \
    std:: cout << "Cube of " << a   << " is "                 \
    << a * a *a << "\n\n#Date: " << __DATE__ <<" \n#Time: " << __TIME__;                                     \

int main() {
    int a;

    std:: cout << "Want to find cube ? then Enter a number--> ";
    std:: cin >> a;
    FINDCUBE(a);
}