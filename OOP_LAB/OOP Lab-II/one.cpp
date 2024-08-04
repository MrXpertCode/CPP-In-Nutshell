// Write a function using reference variables as arguments to swap the values of a pair of floating point
// numbers. (Reference Variable)

#include <iostream>

using namespace std;

void swap(double &a , double &b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    double a = 1.23;
    double b = 4.56;

    cout << "Before Swap A="<< a << "B=" << b << endl;

    swap(a , b);

    cout << "After Swap A="<< a << "B=" << b;
}