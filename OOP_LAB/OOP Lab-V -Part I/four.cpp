// Define a class FINDER with,
// a. Data Member:
// i. An integer array of size 10.
// b. Member functions:
// i. getData() to assign values
// ii. Largest() to find the largest number. 

#include <iostream>

class FINDER {
    public:
        int arr[10];
    void getdata() {
        for (int i=0; i<10; i++) {
            std:: cout << "Enter value No" << i + 1 << ": ";
            std:: cin >> arr[i];
        }
    }


    void Largest() {
        int largest = arr[0];
        for (int i=0; i<10; i++) {
            if (largest < arr[i]) {
                largest = arr[i];
            }
        }
        std:: cout << "The largest Number among given array is " << largest;
    }
};


int main() {
    FINDER object;
    object.getdata();
    object.Largest();
}