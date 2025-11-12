#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here


class Mammel: public Animel{
    private:
    string furColor;
    Mammel(string furColor, string name, int age, bool isHung);
    void display();
};




#endif
