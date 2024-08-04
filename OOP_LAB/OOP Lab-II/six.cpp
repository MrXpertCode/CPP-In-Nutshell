#include <iostream>
#include <string>

namespace Employee_Details {
    std::string name;
    int age;
    int id;
    double salary;

void Data_Entry() {
    std::cout <<"Enter name of Employee: ";
    getline(std::cin , name);

    std::cout << "Enter age of Employee: ";
    std::cin >> age;

    std::cout << "Enter id of Employee: ";
    std::cin >> id;

    std::cout << "Enter Salary of Employee: ";
    std::cin >> salary;
}

void Calc_Tax() {
    double tax;
    if (salary < 15000) {
        tax = salary * 0.02;
    }

    else if (salary < 20000) {
        tax = salary * 0.05;
    }

    else if (salary > 20000) {
        tax = salary * 0.1;
    }

    std::cout <<"Tax amount after salary for " << name <<" is " << tax << std::endl;
    
}
}

int main() {
    Employee_Details::Data_Entry();
    Employee_Details::Calc_Tax();
}