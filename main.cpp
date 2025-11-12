#include "Animal.h"
#include "Mammel.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
Animal::Animal(string name, int age, bool isHung){
    this->name=name;
    this->age=age;
    this->isHung=isHung;
}
void Animal::feed(){
    if(isHung==true){
        cout<< "Hungry"<< endl;
    }
    cout<< "Not Hungry"<<endl;
}

void Animal:: display(){
    cout<< "name of the animal: "<< name<< endl;
    cout<< "the age: "<< age<< endl;
    cout<< "the animal is: "<< isHung<< endl;
    
}

Mammel::Mammel(string furColor, string name, int age, bool isHung): Animal(name, age, isHung){
    this->furColor=furColor;
}
void Mammel:: display(){
    Animal::display();
    cout<< "it's furColor is: "<< furColor<< endl;
    
}
Bird::Bird(float WingSpan, string name, int age, bool isHung): Animal(name, age, isHung){
    this->WingSpan=WingSpan;
}
void Bird:: display(){
    Animal::display();
    cout<< "the WingSpan is: "<< WingSpan<< endl;
}
Reptile::Reptile(bool isVenomus, string name, int age, bool isHung): Animal(name, age, isHung){
    isVenomus=isVenomus;
}

void Reptile::display(){
    Animal::display();
    cout<< " this Reptile is: " <<isVenomus<< endl ;
}
Enclosure:: Enclosure(Animal * Animal, int capacity, int CurrentCount){
   this-> Animal= Animal;
   this->capacity=capacity;
   this->CurrentCount=CurrentCount;
}
void Enclosure:: addAnimel(Animal *a){
    a=new Animal[CurrentCount + 1];
    for(int i=0;i<CurrentCount;i++){
        if(a[i]==null){
            
        }
    }
}
~Enclosure(){
    delete [] Animal;
}
void Enclosure::  diplayAnimals(){
    cout<< Animal->display();
    
}
int Enclosure::   getCapacity(int c){
   return  capacity=+c;
}
int Enclosure::  getCurrentCount(int count){
    
    return CurrentCount+=count;
}
Visitor::Visitor(String name,int numTickets){
    this->name=name;
    this->numTickets=numTickets;
}
void Visitor::  displayinfo(){
    cout<<"name of the visitor: "<< name<<endl;
    cout<< "number of tickets that was bought: "<< numTickets<<endl;
}
int Visitor::  getTickets(int ticketsBought){
    return numTickets+=ticketsBought;
}


int main(){
    Mammel Lion("red", "lion", 5, true);
    Bird Parrot(3.9, "PArrot", 2, false);
    Reptile Snake(true, "Sanke", 3, true);
    Lion.diplay();
    Parrot.display();
    Sanke.display();
    
    Visitor x("Sara ALi", 3)
    x.getTickets(3);
    x.displayinfo();
    
    return 0;
}
