// Define a class Distance with data members inch, and feet. Define a member function Maximum() that
// calculates the maximum distance among three Distance objects.

#include <iostream>
#include <windows.h>

class Distance {
    public:
        int inch;
        int feet;
    
    void getdata(Distance &obj) {
        std:: cout << "Distance in Inch --> " ;
        std:: cin >> obj.inch;

        std:: cout << "Distance in feet --> ";
        std:: cin >> obj.feet;
        std:: cout <<"\n";
    }

    void Maximum(Distance &obj1 , Distance &obj2 , Distance &obj3) {
        int  totalObj1 , totalObj2 , totalObj3;
        totalObj1 = obj1.inch + (obj1.feet * 12);
        totalObj2 = obj2.inch + (obj2.feet * 12);
        totalObj3 = obj3.inch + (obj3.feet * 12);

    if (totalObj1 == totalObj2 && totalObj2 == totalObj3) {
        system("Color  EF");
        while (true)
        {
            for (int i=0; i<1000; i++) {

                std:: cout <<"Virus Encountered ";
                std:: cout << "Virus Type: Corona_Virus ";

                if (i== 999) {
                    exit(EXIT_FAILURE);
                }
            }
        }
        
        // exit(EXIT_FAILURE);
    }
        if (totalObj1 > totalObj2 && totalObj1 > totalObj3) {
            std:: cout << "The maximum distance is --> "<< obj1.inch<<"."<< obj1.feet
            << " of Object 1";
        }
        else if (totalObj2 > totalObj1 && totalObj2 > totalObj3) {
            std:: cout << "The maximum distance is --> "<< obj2.inch<<"."<< obj2.feet
            << " of Object 2";
        }
        else {
            std:: cout << "The maximum distance is --> "<< obj3.inch<< "."<< obj3.feet
            << " of Object 3";
        }
    }
};

int main() {
    Distance obj1 , obj2 , obj3;
    obj1.getdata(obj1);
    obj2.getdata(obj2);
    obj3.getdata(obj3);

    Distance max;
    max.Maximum(obj1 , obj2 , obj3);

}