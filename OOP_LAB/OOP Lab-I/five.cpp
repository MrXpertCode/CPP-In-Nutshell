#include <iostream>

using namespace std;

int main()
{

    double a = 1.234234525342;
    double b = 1234.5;
    double c = 1.0e-10;

    cout.precision(5);

    cout << "Default:\n"
         << a << '\n'
         << b << '\n'
         << c << '\n';

    cout << '\n';

    cout << "Fixed:\n"
         << fixed
         << a << '\n'
         << b << '\n'
         << c << '\n';

    cout << '\n';

    cout << "Scientific:\n"
         << scientific
         << a << '\n'
         << b << '\n'
        << c << '\n';
}