#pragma once
#include "Animal.h"
#include <string>

using namespace std;

class Dog: public Animal {
public: //область видимости для всех
    Dog(string name);
    virtual void voice();

};
