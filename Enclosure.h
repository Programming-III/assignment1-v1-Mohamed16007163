#ifndef Enclosure_h
#define Enclosure_h


#include <iostream>
using namespace std;
class Enclosure{
    private:
    Animal * Animal ;
    int capacity;
    int CurrentCount;
    public:
    Enclosure(Animal * Animal, int capacity, int CurrentCount);
    void addAnimel(Animal *a);
    ~Enclosure();
    void diplayAnimals();
    int getCapacity(int c);
    int getCurrentCount(int count);
    
    
};
#endif
