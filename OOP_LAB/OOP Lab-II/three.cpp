// Write a program to read a line of text with embedded blanks.(String in C++)
#include <iostream>
#include <string>

int main() {
    std:: string name;

   std:: cout << "Please Enter you Name : \n";
   getline(std:: cin , name);

   std:: cout << "Your Name is " << name;
}