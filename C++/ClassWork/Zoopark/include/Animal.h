#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal
{
protected:
    string name;

public:
    // Конструктор
    Animal(string name_);

    // деструктор
    virtual ~Animal();

    virtual void voice();

};

#endif // ANIMAL_H
