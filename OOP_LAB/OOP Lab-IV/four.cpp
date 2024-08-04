// Define a structure STUDENT with data members name, roll, and total_marks. Use appropriate member
// functions to initialize, and display the data. Also define a member function that calculates the percentage
// of total_marks, based on full marks supplied by the user (Structure in C++).

#include <iostream>
#include <iomanip>
#include <windows.h>

struct STUDENT
{
    std::string name;
    int rollNo;
    int full_marks;
    double total_marks;

    void Initialize() {
        std::cout << "What's Your Name ? ";
        std::cin >> name;

        std::cout << "What is your Roll no ?";
        std::cin >> rollNo;

        std::cout << "What is your Full Marks ?";
        std::cin >> full_marks;
    }

    void calculatePercentage() {
        total_marks = full_marks;
    }

    void display()
    {
        std::cout << std::left << std::setw(15)
                  << "Name" << std::setw(15)
                  << "Roll NO" << std::setw(15)
                  << "Full Marks" << std::setw(15)
                  << "Total_Marks"<< std::endl;

        system("Color 02");
        std::cout << std:: left << std:: setw(15)
                  << name << std::setw(15)
                  << rollNo << std::setw(15)
                  << full_marks 
                //   << std::setw(15) << std:: fixed << std:: setprecision(0)
                  << total_marks << "%"
                  << std::endl;
    }
};

int main()
{
    STUDENT vidyarthi;
    vidyarthi.Initialize();
    vidyarthi.calculatePercentage();
    vidyarthi.display();
}