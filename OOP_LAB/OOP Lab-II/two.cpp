// 2. WAP using function (pass by reference) that calculates the values of x and y from the two linear equations.
// ax + by = m
// cx + dy = n
// The solutions are given as;
// x = (md-bn)/(ad-cb)
// y = (na-mc)/(ad-cb)

#include <iostream>

using namespace std;

int Calculator (int &x , int &y , int &m , int &d , int &b , int &n , int &a , int &c) {

         x = (m*d-b*n)/(a*d-c*b);
         y = (n*a-m*c)/(a*d-c*b);
};



int main() {

    int x , y;
    int m = 2;
    int d = 4;
    int b = 6;
    int n = 8;
    int a = 10;
    int c = 12;

    int result = Calculator(x , y , m , d , b , n , a , c);

    cout << x << "\n" << y;

}