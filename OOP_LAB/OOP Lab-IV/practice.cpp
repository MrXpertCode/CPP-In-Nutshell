#include <iostream>

namespace COLLECTION {
    struct NC {
        int Rs;
        int Paisa;

        void input() {
            std::cout << "Enter Rs: ";
            std::cin >> Rs;
            std::cout << "Enter Paisa: ";
            std::cin >> Paisa;
        }

        void show() {
            std::cout << "Rs: " << Rs << ", Paisa: " << Paisa << std::endl;
        }
    };

    struct AC {
        int Dollar;
        int Cent;

        void input() {
            std::cout << "Enter Dollar: ";
            std::cin >> Dollar;
            std::cout << "Enter Cent: ";
            std::cin >> Cent;
        }

        void show() {
            std::cout << "Dollar: " << Dollar << ", Cent: " << Cent << std::endl;
        }
    };
}

void Conversion(COLLECTION::NC nc, COLLECTION::AC ac) {
    int totalRs = nc.Rs + (nc.Paisa / 100);
    int totalCent = ac.Dollar * 100 + ac.Cent;
    int totalRsFromDollar = totalCent / 100 * 100; // Convert cents to Rs
    int totalAmountInRs = totalRs + totalRsFromDollar;
    std::cout << "Total amount in Rs: " << totalAmountInRs << std::endl;
}

int main() {
    COLLECTION::NC nc;
    COLLECTION::AC ac;

    std::cout << "Enter NC details:" << std::endl;
    nc.input();
    std::cout << "NC details: ";
    nc.show();

    std::cout << "Enter AC details:" << std::endl;
    ac.input();
    std::cout << "AC details: ";
    ac.show();

    Conversion(nc, ac);

    return 0;
}