#ifndef Animal_h
#define Animal_h
#include <iostream>
using namespace std;

class Animal{
    private:
    string name;
    int age;
    bool isHung;
    public:
    Animal(string name, int age, bool isHung);
    void display();
    void feed();
    
    
};
#endif
