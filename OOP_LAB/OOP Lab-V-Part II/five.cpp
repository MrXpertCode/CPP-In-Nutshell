// . Create a namespace called COLLECTION that contains two classes NC, and AC. NC with data memberâ€™s Rs,
// and Paisa. Class AC with data members Dollar, and Cent. Construct member functions for the following
// operations in each classes.
// a. To input data.
// b. To show the data.
// Define an external function Conversion(), that takes two arguments; first argument of type NC, and second
// argument of type AC, and finds the total amount in Rupees.
// Given,
// 1 Dollar = 100 Rs

#include <iostream>

namespace COLLECTION {
    
    class NC {
        public:

        int Rs;
        int Paisa;

        void getdata() {
            std:: cout << "Tapai sanga Kati Rupaya cha ? --> ";
            std:: cin >> Rs;

            std:: cout << "Tapai sanga Kati Paisa cha ? --> ";
            std:: cin >> Paisa;
        }

        void showdata() {
            std:: cout << "[-] Tapai sanga " << Rs << " Rs " << Paisa << " Paisa Raheko cha [-]\n";
        }
    };

    class AC {
        public:

        int Dollar;
        int Cent;

        void getdata() {
            std:: cout << "\nTapai sanga Kati Dollar cha ? --> ";
            std:: cin >> Dollar;

            std:: cout << "Tapai sanga Kati Cent cha ? --> ";
            std:: cin >> Cent;
        }

            void showdata() {
            std:: cout << "[-] Tapai sanga " << Dollar << " Dollar " << Cent << " Cent Raheko cha [-]\n";
        }
    };

};


    void Conversion(COLLECTION::NC obj1 , COLLECTION::AC obj2) {
        int InRs;
        int InDollar;
        int TotalRs;

        InRs = obj1.Rs + (obj1.Paisa / 100);
        InDollar = obj2.Dollar + (obj2.Cent / 100);
        TotalRs = InRs + (InDollar * 100);

        std:: cout << "\nTotal Amount for Both in Rupee is " << TotalRs <<" Rs \n";
    }

int main() {
    COLLECTION::NC obj1;
    obj1.getdata();
    obj1.showdata();

    COLLECTION::AC obj2;
    obj2.getdata();
    obj2.showdata();

    Conversion(obj1 , obj2);
    

}