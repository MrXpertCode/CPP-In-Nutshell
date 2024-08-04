// 2. Define a class ROOM with following specifications:
// a. Data Members
// i. Length
// ii. Width
// b. Member Functions
// i. setdata() to assign initial values
// ii. display() to display values
// iii. area() to find and display the area.
// Your program should calculate the areas of three Rooms; R1, R2, R3.

#include <iostream>

class ROOM
{
public:
    double length;
    double width;

    void setdata(double l , double w)
    {
        length = l;
        width = w;
    }

    int display () {
        std:: cout << "Length = " << length << std:: endl;
        std:: cout << "Width = " << width << std:: endl;
    }

    void area() {
        double roomArea = length * width;
        std:: cout << "Area of Room " << roomArea << "\n\n";
    }
};


int main() {
    ROOM R1 , R2 , R3;

    R1.setdata(12.2 , 13.3);
    R1.display();
    R1.area();

    R2.setdata(123.243 , 43.2342);
    R2.display();
    R2.area();

    R3.setdata(192.2 , 123.3);
    R3.display();
    R3.area();

}