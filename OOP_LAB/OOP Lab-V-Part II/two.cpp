// Create a class called Point with two data members X-coordinate, and Y-coordinate. Construct different
// member functions with the following operations.
// a. To input data for Point objects.
// b. To show the data of Point objects.
// c. Member function to find distance between two Points.

#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
   //  Point(double x = 0, double y = 0) : x(x), y(y) {}

    void inputData() {
        std::cout << "Enter X-coordinate: ";
        std::cin >> x;
        std::cout << "Enter Y-coordinate: ";
        std::cin >> y;
    }

    void showData() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    static double distance(const Point& p1, const Point& p2) {
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return std::sqrt(dx*dx + dy*dy);
    }
};


int main() {
   Point obj1;
   obj1.inputData();
   obj1.showData();

   Point obj2;
   obj2.inputData();
   obj2.showData();

   double result = Point::distance(obj1 , obj2);
   std:: cout << result;
}