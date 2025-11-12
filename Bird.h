#ifndef Bird_h
#define Bird_h
#include "Animal.h"

#include <iostream>
using namespace std;
class Bird: public Animal{
    private:
   float WingSpan ;
   public:
   Bird(float WingSpan, string name, int age, bool isHung);
   void display();
};


#endif
