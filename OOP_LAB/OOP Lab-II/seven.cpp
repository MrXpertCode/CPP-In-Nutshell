#include <iostream>
#include <iomanip>

namespace Dollar
{
    double dollar;
    int rupee;
    int dinar;
    void conversion1()

    {   std:: cout <<"Enter rupee to Convert into Dollar: ";
        std:: cin >> rupee;
        dollar = rupee / 111;
        std::cout << "Conversion from " << rupee << " Rupee into Dollar is: " << std::fixed
                  << std::setprecision(3) << dollar << "$" << std::endl;
    }

    void conversion2()
    {   
        std:: cout << "Enter Dinar to Convert into Dollar: ";
        std:: cin >> dinar;
        dollar = dinar * 3;
        std::cout << "Conversion from " << dinar << " dinar into Dollar is: " << std::fixed
                  << std::setprecision(3) << dollar << "$" << std::endl;
    }

}
namespace Rupee
{
    double rupee;
    int dollar;
    int dinar;

    void conversion1()
    {   std:: cout <<"Enter Dollar to Convert into rupee: ";
        std:: cin >> dollar;
        rupee = dollar * 111;
        std::cout << "Conversion from " << dollar << " Dollar to Rupee is: " << std::fixed
                  << std::setprecision(3) << rupee << "Rs" << std::endl;
    }

    void conversion2()
    {   
        std:: cout <<"Enter Dinat to Convert into rupee: ";
        std:: cin >> dinar;
        rupee = dinar * 141;
        std::cout << "Conversion from " << dinar << " Dinar to Rupee is: " << std::fixed
                  << std::setprecision(3) << rupee << "Rs" << std::endl;
    }
}
namespace dinar
{
    double dinar;
    int rupee;
    int dollar;
    void conversion1()
    {   
        std:: cout <<"Enter Rupee to Convert into Dinar: ";
        std:: cin >> rupee;
        dinar = rupee / 141;
        std::cout << "Conversion from " << rupee << " rupee to dinar is: " << std::fixed
                  << std::setprecision(3) << dinar << "Dn" << std::endl;
    }

    void conversion2()
    {   
        std:: cout <<"Enter Dollar to Convert into Dinar: ";
        std:: cin >> dollar;
        dinar = dollar / 3;
        std::cout << "Conversion from " << dollar << " dollar to dinar is: " << std::fixed
                  << std::setprecision(3) << dinar << "Dn" << std::endl;
    }
}

int main()
{
    std::cout <<"-----------------------------------------------\n";
    Dollar::conversion1();
    Dollar::conversion2();

    Rupee::conversion1();
    Rupee::conversion2();

    dinar::conversion1();
    dinar::conversion2();
    std::cout <<"-----------------------------------------------\n";
}