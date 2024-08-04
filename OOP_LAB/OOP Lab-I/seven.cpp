// 7. An electricity board charges the following rates to domestic users to discourage large consumption of energy.
// For the first 100 units - 60P per unit
// For the next 200 units - 80P per unit
// Beyond 300 units - 90P per unit
// All users are charged a minimum Rs. 50.00. If the total amount is more than Rs. 300 then additional surcharge of
// 15% is added.
// Write a program to read the name of user and number of units consumed and print out the charges with name.

#include <iostream>
#include <iomanip>

using namespace std;


int main() {


    int noOfusers;
    int price;

    cout << "Enter No of Users: ";
    cin >> noOfusers;
    cin.ignore();

    struct Users {
        string Name;
        int unitConsumed;
        double Charges;
    };

    Users user[noOfusers];

    for (int i=0; i<noOfusers; i++) {
        cout << "\nEnter Name of users no " << i + 1 << ": ";
        getline( cin , user[i].Name);

        cout << "Enter UnitConsumed by " << user[i].Name << ": ";
        cin >> user[i].unitConsumed;

        cin.ignore();
    }

    for( int i=0; i<noOfusers; i++) {
        if (user[i].unitConsumed <= 100) {
            user[i].Charges = user[i].unitConsumed * 60;
        }

        else if (user[i].unitConsumed < 200) {
            user[i].Charges = user[i].unitConsumed * 80;
        }

        else if (user[i].unitConsumed > 300) {
           user[i].Charges = user[i].unitConsumed * 90;
        }
    }



    for (int i=0; i<noOfusers; i++) {
        if (user[i].Charges > 300) {
            user[i].Charges += user[i].Charges * 0.15;
        }
    }


    cout << "-------------------------------------------------\n";
    cout << left << setw(20) << "Name"
    << setw(20) << "Units Consumed"
    << setw(20) << "Charges" << endl;
    cout << "-------------------------------------------------\n";

    for (int i=0; i<noOfusers; i++) {
        cout << left << setw(20) << user[i].Name 
        << setw(20) << user[i].unitConsumed
        << setw(20) << fixed << setprecision(5) << user[i].Charges
        << endl;
    }

}