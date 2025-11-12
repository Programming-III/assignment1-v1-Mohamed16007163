#ifndef Mammel_h
#define Mammel_h
#include "Animal.h"
#include <iostream>
using namespace std;
class Mammel: public Animal{
    private:
    string furColor;
    Mammel(string furColor, string name, int age, bool isHung);
    void display();
};

#endif
