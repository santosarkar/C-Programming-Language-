#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Base {
public:
    virtual void show() { // Virtual function for dynamic binding
        cout << "Base class" << endl; // Output message
    }
};

class Derived : public Base {
public:
    void show() override { // Overriding the base class function
        cout << "Derived class" << endl; // Output message
    }
};

int main() {
    Base* basePtr; // Pointer to base class
    Derived derivedObj; // Creating a derived class object
    basePtr = &derivedObj; // Assigning derived class object to base pointer
    basePtr->show(); // Calling overridden function (dynamic binding)
    return 0; // Returning 0 to indicate successful execution
}
