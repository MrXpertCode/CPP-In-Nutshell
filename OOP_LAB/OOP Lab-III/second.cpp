// WAP to overload Search () function that takes an array of integers, an array of character,
// an array of float to find the Key supplied by the user. (Function Overloading) // *** /

#include <iostream>

void Search(int arrOfInt[], int length)
{
    int num;

    std::cout << "Enter Number from[1 to 5]: ";
    std::cin >> num;

    bool found = false;
    for (int i = 0; i < length; i++)
    {
        if (num == arrOfInt[i])
        {
            std::cout << "!Number found! " << arrOfInt[i] << std::endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "!Number Not found!" << std::endl;
    }
}

void Search(char arrOfChar[], int charlength)
{
    char userChar;
    std ::cout << "Enter a Character: ";
    std::cin >> userChar;

    bool found = false;
    for (int i = 0; i < charlength; i++)
    {
        if (userChar == arrOfChar[i])
        {
            std::cout << "!Character found! " << arrOfChar[i] << std::endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "!Character Not found!" << std::endl;
    }
}
void Search(float arrOfFloat[], int floatLength)
{
    float userFloat;
    std::cout << "Enter a Floating Number: ";
    std::cin >> userFloat;

    bool found = false;
    for (int i = 0; i < floatLength; i++)
    {
        if (userFloat == arrOfFloat[i])
        {
            std::cout << "!Float Value found! " << arrOfFloat[i] << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "!Float Value Not found!" << std::endl;
    }
}

int main()
{
    int arrOfInt[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arrOfInt) / sizeof(arrOfInt[0]);

    char arrOfChar[6] = "great";
    int charlength = sizeof(arrOfChar) / sizeof(arrOfChar[0]);

    float arrOfFloat[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    int floatLength = sizeof(arrOfFloat) / sizeof(arrOfFloat[0]);

    Search(arrOfInt, length);
    Search(arrOfChar, charlength);
    Search(arrOfFloat, floatLength);
}