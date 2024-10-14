#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Animal {
public:
    void eat() { // Function to simulate eating
        cout << "Eating..." << endl; // Output message
    }
};

class Dog : public Animal { // Dog class inherits from Animal
public:
    void bark() { // Function to simulate barking
        cout << "Barking..." << endl; // Output message
    }
};

int main() {
    Dog dog; // Creating a Dog object
    dog.eat(); // Calling eat function from Animal class
    dog.bark(); // Calling bark function from Dog class
    return 0; // Returning 0 to indicate successful execution
}
