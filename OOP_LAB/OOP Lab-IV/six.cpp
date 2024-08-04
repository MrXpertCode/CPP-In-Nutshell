// 6. Create a namespace called COLLECTION that contains two structures NC, and AC. NC with data
// member’s Rs, and Paisa. Structure AC with data members Dollar, and Cent. Construct member functions
// for the following operations in each structure.
// a. To input data.
// b. To show the data.
// Define an external function Conversion (), that takes two arguments; first argument of type NC, and
// second argument of type AC, and finds the total amount in Rupees (Structure in C++).
// Given,
// 1 Dollar = 100 Rs.

#include <iostream>

namespace COLLECTION {

    struct NC {
        int  RS;
        int Paisa;

        void inputData() {
            std:: cout << "Enter Rupees: ";
            std:: cin >> RS;

            std:: cout << "Enter Paisa: ";
            std:: cin >> Paisa;
        }

        void ShowData() {
            std:: cout << "You Enter "<< RS <<"Rs and " << Paisa <<" paisa" << std:: endl;
        }
    };

    struct AC {
        int Dollar;
        int Cent;

        void inputData() {
            std:: cout << "Enter Dollar: ";
            std:: cin >> Dollar;

            std:: cout << "Enter Cent: ";
            std:: cin >> Cent;
        }

        void ShowData() {
            std:: cout << "You Enter "<< Dollar <<" Dollar  and " << Cent <<" Cent" << std:: endl;
        }
    };

};


void Conversion(COLLECTION::AC ac, COLLECTION::NC nc) {

    int totalRs = nc.RS +( nc.Paisa/100);
    int totalDollar = ac.Dollar + (ac.Dollar/100);
    int dollarTOrs = totalDollar * 100;
    int TotalAmount = totalRs + dollarTOrs;

    std:: cout << "Total Rs would be " << TotalAmount;
}

int main() {
    COLLECTION::AC ac;
    COLLECTION::NC nc;
    
    std:: cout <<"Input data for NC (Rupees and Paisa): " << std:: endl;
    nc.inputData();
    nc.ShowData();

    std:: cout <<"Input data for AC (Dollar and Cent): " << std:: endl;
    ac.inputData();
    ac.ShowData();
    
    Conversion(ac , nc);
}