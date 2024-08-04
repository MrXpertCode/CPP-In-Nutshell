// Define a class SAMPLE with data member an array of character. Write a member function called
// ReverseIt() that reverse a string (an array of character). Use a for loop that swaps the first and last
// character, then the second, and next-to last character and so on.

#include <iostream>

class SAMPLE {
    public:
        char arrofChar[8] = {'c','o','m','p','u','t','e','r'};


    void ReverseIt() {

        int count = sizeof(arrofChar) / sizeof(arrofChar[0]);

        int start = 0;
        int last = count - 1;

        for (start=0; start<last; start++, last--) {
            char temp = arrofChar[start];
            arrofChar[start] = arrofChar[last];
            arrofChar[last] = temp;
        }


        for (int i=0; i<count; i++) {
            std:: cout << arrofChar[i] <<" ";
        }
    }

};

int main() {
    SAMPLE object;
    object.ReverseIt();
}