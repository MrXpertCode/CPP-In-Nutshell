#include <iostream>

int main()
{
    std:: string *ptr{new std:: string};
    
    *ptr = "I am a good Pointer";

    std::cout << *ptr;
    delete ptr;
}