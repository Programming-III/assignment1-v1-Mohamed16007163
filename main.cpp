#include "Animal.h"
#include "Mammel.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


Animal::Animal(string name, int age, bool isHung) {
    this->name = name;
    this->age = age;
    this->isHung = isHung;
}

void Animal::feed() {
    if (isHung)
        cout << "Hungry" << endl;
    else
        cout << "Not Hungry" << endl;
}

void Animal::display() {
    cout << "Name of the animal: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hungry: " << (isHung ? "Yes" : "No") << endl;
}

Mammel::Mammel(string furColor, string name, int age, bool isHung)
    : Animal(name, age, isHung) {
    this->furColor = furColor;
}

void Mammel::display() {
    Animal::display();
    cout << "It's fur color is: " << furColor << endl;
}

Bird::Bird(float WingSpan, string name, int age, bool isHung)
    : Animal(name, age, isHung) {
    this->WingSpan = WingSpan;
}

void Bird::display() {
    Animal::display();
    cout << "The wing span is: " << WingSpan << endl;
}


Reptile::Reptile(bool isVenomus, string name, int age, bool isHung)
    : Animal(name, age, isHung) {
    this->isVenomus = isVenomus;
}

void Reptile::display() {
    Animal::display();
    cout << "This reptile is " << (isVenomus ? "Venomous" : "Not venomous") << endl;
}


Enclosure::Enclosure(Animal* animals, int capacity, int CurrentCount) {
    this->animals = animals;
    this->capacity = capacity;
    this->CurrentCount = CurrentCount;
}

void Enclosure::addAnimel(Animal* a) {
    if (CurrentCount < capacity) {
        animals[CurrentCount++] = *a;
        cout << "Animal added to the enclosure." << endl;
    } else {
        cout << "Enclosure is full!" << endl;
    }
}

Enclosure::~Enclosure() {
    delete[] animals;
}

void Enclosure::diplayAnimals() {
    cout << "--- Animals in Enclosure ---" << endl;
    for (int i = 0; i < CurrentCount; i++) {
        animals[i].display();
        
    }
}

int Enclosure::getCapacity(int c) {
    capacity += c;
    return capacity;
}

int Enclosure::getCurrentCount(int count) {
    CurrentCount += count;
    return CurrentCount;
}


Visitor::Visitor(string name, int numTickets) {
    this->name = name;
    this->numTickets = numTickets;
}

void Visitor::displayinfo() {
    cout << "Name of the visitor: " << name << endl;
    cout << "Number of tickets bought: " << numTickets << endl;
}

int Visitor::getTickets(int ticketsBought) {
    numTickets += ticketsBought;
    return numTickets;
}


int main() {
    Mammel Lion("Red", "Lion", 5, true);
    Bird Parrot(3.9, "Parrot", 2, false);
    Reptile Snake(true, "Snake", 3, true);

    Lion.display();
    Parrot.display();
    Snake.display();

    Visitor x("Sara Ali", 3);
    x.getTickets(3);
    x.displayinfo();

    return 0;
}
