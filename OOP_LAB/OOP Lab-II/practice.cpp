#include <iostream>

int fibonacci(int k) {
    if (k <= 1) {
        return k;
    }
    else {
        return fibonacci(k-1) + fibonacci(k-2);
    }
}

int main() {

    for (int i=0; i<=10; i++) {
       std:: cout << fibonacci(i) << " ";
    }
}