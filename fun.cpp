#include <iostream>
#include <windows.h>

int main()
{

    while (true)
    {
        for (int i = 0; i < 50; i++)
        {
            system("Color 7B");
        }

        for (int i = 0; i < 50; i++)
        {
            system("Color 25");
        }

        for (int i=0; i < 50 ; i++) {
            system("Color 1A");
        }

        for (int i=0; i< 50; i++) {
            system("Color 51");
        }

        system("curl wttr.in/kathmandu");

    }
}