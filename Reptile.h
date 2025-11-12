#ifndef Reptile_h
#define Reptile_h
#include "Animal.h"

#include <iostream>
using namespace std;
class Reptile : public Animal{
    private:
    bool isVenomus;
    public :
    Reptile(bool isVenomus, string name, int age, bool isHung);
    
    void display();
};
#endif
