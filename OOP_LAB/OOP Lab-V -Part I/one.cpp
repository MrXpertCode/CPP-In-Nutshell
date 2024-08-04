// 1. Define a class EMPLOYEE with following specifications:
// a. Private Data Members
// i. name
// ii. age
// iii. salary
// b. Member Functions
// i. getdata() to assign initial values
// ii. display() to display name and age (Define outside of the class)


#include  <iostream>

class EMPLOYEE {
    private:
        std:: string name;
            int age;
            int salary;

    public:
        void getdata() {
        std:: cout << "What's your Name ? -->";
        std:: cin >> name;

        std:: cout << "age ? -->";
        std:: cin >> age;

        std:: cout << "Salary ? -->";
        std:: cin >> salary;
    }

    // getter

    std:: string getname() {
        return name;
    }

    int getage() {
        return age;
    }

};

void display(EMPLOYEE emp){
    std:: cout << "Your Name is " << emp.getname() << std:: endl;
    std:: cout << "Your Age is " << emp.getage() << std:: endl;
    
}

int main() {
    EMPLOYEE objectOfEmployee;
    objectOfEmployee.getdata();
    display(objectOfEmployee);
}