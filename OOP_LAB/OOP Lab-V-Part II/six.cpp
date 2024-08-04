// Create a class COMPANY with data members E_name, E_address, E_id. E_id is a static data member.
// E_id of the first employee must be 100, E_id of second employee 101, 102 and so on. Define member
// functions to input, and show the data. Also, define a static member function Count_Employee() to count
// the total number of employees.

#include <iostream>

class Company {
    public:
        std:: string E_name;
        std:: string E_address;
        static int count;
        static int E_id;

    private:
        int nextEmployee;

    public:

    Company () {
      nextEmployee = E_id++;
      count++;

    }

     void getdata() {
        std:: cout << "What's your Name ? --> ";
        std:: cin >> E_name;

        std:: cout << "Your Address ? --> ";
        std:: cin >> E_address;

     }

     void showdata() {
        std:: cout << "Your Name is " << E_name
        << "  your address is " << E_address
        << " and Your Employee id is "
        << nextEmployee << std:: endl;

     }

    static void Count_Employee() {
        std:: cout << "Total Employees are: " << count;

     }
};

    int Company:: E_id = 100;
    int Company:: count = 0;


int main() {
    Company emp1 , emp2 , emp3 , emp4;
    emp1.getdata();
    emp1.showdata();

    emp2.getdata();
    emp2.showdata();

    Company:: Count_Employee();

}