#include "Dog.h"
#include <iostream>
#include "header.h"
#include <string>

using namespace std;

Dog::Dog(string name_) :
    Animal(name_)
{

}

void Dog::voice(){
    cout << "DOG " << name << " GAW!!!\n";
}
