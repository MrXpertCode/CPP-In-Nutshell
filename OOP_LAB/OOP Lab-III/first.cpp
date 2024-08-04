// Write a program to compute the area of a triangle, a rectangle, square, and a circle by
// overloading the Area () function. (Function Overloading)

#include <iostream>

double Area(int base, int height)
{
    return 0.5 * base * height;
}

double Area(double length, double width)
{
    return length * width;
}

int Area(int s)
{
    return s * s;
}

double Area(double r)
{
    return 3.14 * r * r;
}

int main()
{
    std::cout << Area(5, 5) << std:: endl;
    std::cout << Area(5.5, 5.5) << std:: endl;
    std::cout << Area(5) << std:: endl;
    std::cout << Area(5.5) << std:: endl;
}