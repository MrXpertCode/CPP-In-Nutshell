#include <iostream>
#include <math.h>

inline double SquareRoot(int a)
{
    return sqrt(a);
}

int main()
{
    int a;
    std:: cout << "Which Number you want to find square root of ? ";
    std:: cin >> a;
    std::cout << "Square root of "<< a <<" is --> "
              << SquareRoot(a);
}