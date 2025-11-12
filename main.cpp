#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;
    bool isHung;
public:
    Animal(string name, int age, bool isHung) {
        this->name = name;
        this->age = age;
        this->isHung = isHung;
    }
    void feed() {
        if (isHung)
            cout << "Hungry" << endl;
        else
            cout << "Not Hungry" << endl;
    }
    virtual void display() {
        cout << "Name of the animal: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Hungry: " << (isHung ? "Yes" : "No") << endl;
    }
};

class Mammel : public Animal {
    string furColor;
public:
    Mammel(string furColor, string name, int age, bool isHung)
        : Animal(name, age, isHung) {
        this->furColor = furColor;
    }
    void display() override {
        Animal::display();
        cout << "Fur color: " << furColor << endl;
    }
};

class Bird : public Animal {
    float wingSpan;
public:
    Bird(float wingSpan, string name, int age, bool isHung)
        : Animal(name, age, isHung) {
        this->wingSpan = wingSpan;
    }
    void display() override {
        Animal::display();
        cout << "Wing span: " << wingSpan << endl;
    }
};

class Reptile : public Animal {
    bool isVenomous;
public:
    Reptile(bool isVenomous, string name, int age, bool isHung)
        : Animal(name, age, isHung) {
        this->isVenomous = isVenomous;
    }
    void display() override {
        Animal::display();
        cout << "Venomous: " << (isVenomous ? "Yes" : "No") << endl;
    }
};

class Enclosure {
    Animal* animal;
    int capacity;
    int currentCount;
public:
    Enclosure(Animal* animal, int capacity, int currentCount) {
        this->animal = animal;
        this->capacity = capacity;
        this->currentCount = currentCount;
    }
    void displayAnimals() {
        if (animal)
            animal->display();
    }
    int getCapacity() const { return capacity; }
    int getCurrentCount() const { return currentCount; }
};

class Visitor {
    string name;
    int numTickets;
public:
    Visitor(string name, int numTickets) {
        this->name = name;
        this->numTickets = numTickets;
    }
    void displayInfo() {
        cout << "Visitor name: " << name << endl;
        cout << "Tickets bought: " << numTickets << endl;
    }
    void addTickets(int ticketsBought) {
        numTickets += ticketsBought;
    }
};

int main() {
    Mammel lion("Golden", "Lion", 5, true);
    Bird parrot(3.9, "Parrot", 2, false);
    Reptile snake(true, "Snake", 3, true);

    cout << "--- Animal Info ---" << endl;
    lion.display();
    cout << endl;
    parrot.display();
    cout << endl;
    snake.display();
    cout << endl;

    Visitor x("Sara Ali", 3);
    x.addTickets(3);
    x.displayInfo();

    return 0;
}
