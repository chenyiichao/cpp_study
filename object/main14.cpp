#include <iostream>

using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animal makes a sound" << endl;
    }

    virtual ~Animal() {
        cout << "Animal destroyed" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() const {
        cout << "Dog barks" << endl;
    }

    ~Dog() {
        cout << "Dog destroyed" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() const {
        cout << "Cat meows" << endl;
    }

    ~Cat() {
        cout << "Cat destroyed" << endl;
    }
};


int main() {
    Animal* animalPtr;

    animalPtr = new Dog();
    animalPtr->sound();
    delete animalPtr;

    animalPtr = new Cat();
    animalPtr->sound();
    delete animalPtr;

    return 0;
}