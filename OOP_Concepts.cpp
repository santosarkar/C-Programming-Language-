#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Car {
public:
    string brand; // Public member variable for car brand
    void honk() { // Public member function to print honk sound
        cout << brand << " goes beep beep!" << endl; // Output honk with brand name
    }
};

int main() {
    Car myCar; // Creating an object of class Car
    myCar.brand = "Tesla"; // Assigning value to brand
    myCar.honk(); // Calling the honk function
    return 0; // Returning 0 to indicate successful execution
}
