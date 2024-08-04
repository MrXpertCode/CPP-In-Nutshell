// 2. WAP to find largest number in a given array

#include <iostream>

int main() {
    int number[] = {4,6,1,7,5,3};
    int length = sizeof(number) / sizeof(number[0]);
    
    int largestNumber = number[0];

    for (int i=0; i<length; i++) {
        if (largestNumber < number[i]) {
            largestNumber = number[i];
        }
    }

    std:: cout << largestNumber;
}