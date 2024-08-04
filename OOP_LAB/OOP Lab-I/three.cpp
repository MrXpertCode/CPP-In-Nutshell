//  WAP to find factorial of a given number.

#include <iostream>

int factorial(int k){
    if (k == 0) {
       return 1;
    }
    else {
        return k * factorial(k-1);
    }
     
}

int main()
{
    int userNum;
    std::cout << "Enter a Number: ";
    std::cin >> userNum;
    std::cout << factorial(userNum);
}