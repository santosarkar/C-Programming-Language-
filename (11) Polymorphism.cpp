#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Animal {
public:
    virtual void sound() { // Virtual function for polymorphism
        cout << "Some sound" << endl; // Output message
    }
};

class Dog : public Animal {
public:
    void sound() override { // Overriding sound function in Dog class
        cout << "Barking" << endl; // Output barking sound
    }
};

class Cat : public Animal {
public:
    void sound() override { // Overriding sound function in Cat class
        cout << "Meowing" << endl; // Output meowing sound
    }
};

int main() {
    Animal* a; // Pointer to base class Animal
    Dog dog; // Creating a Dog object
    Cat cat; // Creating a Cat object

    a = &dog; // Assigning Dog object to Animal pointer
    a->sound(); // Calling sound function (Dog's sound)

    a = &cat; // Assigning Cat object to Animal pointer
    a->sound(); // Calling sound function (Cat's sound)

    return 0; // Returning 0 to indicate successful execution
}
