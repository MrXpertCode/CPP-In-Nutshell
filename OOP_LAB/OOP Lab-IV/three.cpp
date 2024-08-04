#include <iostream>
#include <iomanip>

int main() {

    struct Employee {
        std:: string name;
        int age;
        int salary;

        void getdata() {
            std:: cout << "What's Your Name ? ";
            std:: cin >> name;

            std:: cout << "And How old are you ?";
            std:: cin >> age;

            std:: cout << "How much do you make in a Month ? (Money) ";
            std:: cin >> salary;
        }

        void display() {
            std:: cout << std:: left <<std:: setw(15)
            << "Name" << std:: setw(15)
            << "Age" << std:: setw(15)
            << "Salary" << std:: endl;
            std:: cout << std:: left << std:: setw(15)
            << name << std:: setw(15)
            << age << std:: setw(10)
            << salary << std:: endl;
        }
    };

    Employee employee;
    employee.getdata();
    employee.display();
}