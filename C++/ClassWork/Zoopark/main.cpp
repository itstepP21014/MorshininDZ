#include <iostream>
#include "Animal.h"
#include "header.h"
#include "Dog.h"

using namespace std;

int main()
{
    Cat Thomas("Tommy");
    Dog Maks("Tyzik");

    Thomas.voice();
    Maks.voice();

    return 0;
}
