#include <iostream>
#include <iomanip>

using namespace std;

class Electricity {
        public:

        string Name;
        int unitConsumed;
        double Charges;
};

int main() {

    int noOfusers;
    cout << "Enter No of Users: ";
    cin >> noOfusers;
    cin.ignore();

    Electricity users[noOfusers];

    for (int i=0; i<noOfusers; i++) {
        cout << "\nEnter Name of users no " << i + 1 << ": ";
        getline( cin , users[i].Name);

        cout << "Enter UnitConsumed by " << users[i].Name << ": ";
        cin >> users[i].unitConsumed;

        cin.ignore();
    }

    for( int i=0; i<noOfusers; i++) {
        if (users[i].unitConsumed <= 100) {
            users[i].Charges = users[i].unitConsumed * 60;
        }

        else if (users[i].unitConsumed < 200) {
            users[i].Charges = users[i].unitConsumed * 80;
        }

        else if (users[i].unitConsumed > 300) {
           users[i].Charges = users[i].unitConsumed * 90;
        }
    }



    for (int i=0; i<noOfusers; i++) {
        if (users[i].Charges > 300) {
            users[i].Charges += users[i].Charges * 0.15;
        }
    }


    cout << "-------------------------------------------------\n";
    cout << left << setw(20) << "Name"
    << setw(20) << "Units Consumed"
    << setw(20) << "Charges" << endl;
    cout << "-------------------------------------------------\n";

    for (int i=0; i<noOfusers; i++) {
        cout << left << setw(20) << users[i].Name 
        << setw(20) << users[i].unitConsumed
        << fixed << setprecision(5) << users[i].Charges <<" Rs"
        << endl;
    }

}
