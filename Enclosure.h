#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 

class Enclosure{
    private:
    Animal *[] Animal;
    int capacity;
    int CurrentCount;
    public:
    Enclosure(Animal * Animal, int capacity, int CurrentCount);
    void addAnimel(Animal *a);
    ~Enclosure();
    void diplayAnimals();
    int getCapacity(int c);
    int getCurrentCount(int count);
    
    






#endif
