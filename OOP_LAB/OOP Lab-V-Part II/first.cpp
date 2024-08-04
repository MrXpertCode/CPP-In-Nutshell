// Create a class called Time with data members hour, minute, second. Construct different member
// functions with the following operations.
// a. To input data for Time objects.
// b. To show the data of Time objects.
// c. Member function to add two Time objects.


#include <iostream>

class TIME {
    public:
        double hour;
        double minutes;
        double second;

    void getdata() {
        std:: cout <<"Hour ? ";
        std:: cin >> hour;

        std:: cout <<"Minutes ? ";
        std:: cin >> minutes;

        std:: cout <<"Second ? ";
        std:: cin >> second;
    }

    void showtime() {
        std:: cout << "Ahile" << hour <<":" <<minutes<< ":" << second << " second Gayo\n";
    }

    void addTime(TIME &obj1 , TIME &obj2) {
       double totalTimeOfObj1;
       double totalTimeOfObj2;
       double totalTime;
        totalTimeOfObj1 = (obj1.hour * 60) + (obj1.second / 60) + obj1.minutes;
        totalTimeOfObj2 = (obj2.hour * 60) + (obj2.second / 60) + obj2.minutes;
        totalTime = ( totalTimeOfObj1 + totalTimeOfObj2) / 60;

    
    std:: cout << "Total Time in hour after adding both time object is " << totalTime << " Hour"<< std:: endl;
    }
};

int main() {
    TIME  object ,object1 , object2;
    object1.getdata();
    object2.getdata();
    object.addTime(object1 , object2);
}