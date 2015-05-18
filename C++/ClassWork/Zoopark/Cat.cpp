#include <iostream>
#include "header.h"
#include <string>

using namespace std;

Cat::Cat(string name_) :
    Animal(name_)
{

}

void Cat::voice(){
    cout << "Cat " << name << " Meow!!\n";
}
