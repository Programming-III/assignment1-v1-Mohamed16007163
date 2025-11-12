#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 

class Bird: public Animel{
    private:
   float WingSpan ;
   public Bird(float WingSpan, string name, int age, bool isHung);
   void display();
};





#endif
