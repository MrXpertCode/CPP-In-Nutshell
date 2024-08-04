#include <iostream>
#include <windows.h>

inline int Area(int length, int width)
{
    return length * width;
}

int main()
{
    int length;
    int width;

    system("Color A0");
    
    std::cout << "Enter length: " << std::endl;
    std::cin >> length;

    system("Color 04");

    std::cout << "Enter Width: " << std::endl;
    std::cin >> width;

    system("Color 60");
    std::cout << "The Area of given length and width is " << Area(5, 5);
}