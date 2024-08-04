#include <iostream>
#include <iomanip>

void Emp_Record(std:: string name , int age ,std:: string address = "KATHMANDU"){
    std:: cout <<"-----------------------------------------\n";
    std:: cout << std:: left<< std:: setw(15) 
    << "Name" << std:: setw(15) << "Address"
    << std:: setw(15) << "Age" << std:: endl;
    std:: cout <<"-----------------------------------------\n";
    std:: cout << std:: left << std:: setw(15)
    << name << std:: setw(15)
    << address << std:: setw(15)
    << age << std:: endl;
}

int main() {
    std:: string name;
    int age;

    std:: cout << "What is your Name ? ";
    std:: cin >> name;

    std:: cout << "What's your age ? ";
    std:: cin >> age;
    
    Emp_Record(name ,age);

}