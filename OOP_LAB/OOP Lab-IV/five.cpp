// Define two structures DISTANCE1, and DISTANCE2. DISTANCE1 has one data member meter, and
// DISTANCE2 has data member km. Define an external function Compare() that takes two arguments of
// type DISTANCE1, and DISTANCE2. This function first converts the meter into km and then compares
// the results (Structure in C++).

#include <iostream>
#include <iomanip>

struct DISTANCE1
{
    double meter = 1000;
};
struct DISTANCE2
{
    double kiloMeter;
};

void Compare(struct DISTANCE1, struct DISTANCE2)
{
    DISTANCE1 distance1;
    DISTANCE2 distance2;

    double convert = distance1.meter / 1000;

    std::cout << "Meter = " << distance1.meter
    << " KM = " << convert <<std:: endl;

    std:: cout<< "Comparison :: \nmeter was " << distance1.meter
    << "\nKilometer was:: \n" << std:: fixed  << std:: setprecision(1) << distance2.kiloMeter;
}

int main()
{
    DISTANCE1 distance1;
    DISTANCE2 distance2;
    Compare(distance1, distance2);
}