// WAP to store GPA of n number of students and display it where n is the number of students entered by
// user. (new, and delete operator)

#include <iostream>


void Gpa(int n) {
    
    int *ptr = new int[n];

    for (int i=0; i<n; i++) {
        std:: cout <<"Enter GPA scored by Student No: " << i + 1 << std:: endl;
        std:: cin >> ptr[i];
    }

    std:: cout << ptr;

    for (int i=0; i<n; i++) {
        std:: cout << "\n" << ptr[i] << std:: endl;
    }

     std:: cout << "\n" <<ptr;

    delete ptr;
}

int main() {
    int n;

    std:: cout << "Number of Student ? ";
    std:: cin >> n;

    Gpa(n);

}