// Write a program to compute the area of a triangle, a rectangle, square, and a circle by
// overloading the Area () function. (Function Overloading)

#include <iostream>

int Area(int height , int base) {
    return 0.5 * height * base; 
}

double Area(double width , double length) {
    return width * length;
}

int Area(int a){
    return a * a;
}

int Area(double r){
    return 3.14 * r * r;
}

int main() {

std:: cout << Area(5 ,5) << std:: endl;
std:: cout << Area(5.5 ,5.5) << std:: endl;
std:: cout << Area(5) << std:: endl;
std:: cout << Area(5.5) << std:: endl;


}