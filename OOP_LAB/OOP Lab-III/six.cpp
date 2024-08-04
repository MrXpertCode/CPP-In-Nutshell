#include <iostream>

void Interest( float p , int t , float r = 3.5) {
    double result= (p * t * r) / 100;
    std:: cout << "Interest Acquired is :: " << result;
}

int main() {
    float p;
    int t;

    std:: cout << "Enter Principle amount: ";
    std:: cin >> p;

    std:: cout << "Enter Time ";
    std:: cin >> t;

    Interest(p , t);
}