// Define a class STUDENT with following specifications:
// a. Data Members
// i. name of the student
// ii. roll number
// iii. address
// b. Member Functions
// i. To receive data values
// ii. To display data of student objects.
// Your program should accept and display data about 10 different students.

#include <iostream>
#include <iomanip>


class STUDENT {
    public:
        std:: string name;
        std:: string address;
        int rollNo;


    void getdata() {
        std:: cout << "What is your good Name ?";
        std:: cin >> name;

        std:: cout << "What is your Address ?";
        std:: cin >> address;

        std:: cout << "What is your rollNo ?";
        std:: cin >> rollNo;
        
    }

    void display() {
        std:: cout << "------------------------------------\n";
        std:: cout << std:: left << std:: setw(10)
         << "Name" << std:: setw(10) << "Address"
         << std:: setw(10) << "RollNo" << std:: endl;
        std:: cout << "------------------------------------\n";
        std:: cout << std:: left << std:: setw(10)
        << name << std:: setw(10) << address << std:: setw(10)
        << rollNo << std:: endl;
    }
};


int main() {
    STUDENT object;
    object.getdata();
    object.display();
}