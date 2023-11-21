// PolyaDZOOP123.cpp 
#include "Polya.h"

int main()
{
    setlocale(NULL, "RU");

    Pole s1("Hello");
    s1.print();

    Pole s2(10);
    s2.print();

    s2.set("World");
    s2.print();

    Pole s3 = s1;
    s3.print();


}

