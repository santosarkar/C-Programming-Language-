#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Box {
private:
    int width; // Private member variable for width
public:
    Box() : width(0) {} // Constructor initializes width to 0
    friend void setWidth(Box &b, int w); // Friend function declaration
};

void setWidth(Box &b, int w) { // Friend function definition
    b.width = w; // Accessing private member of Box
    cout << "Width set to: " << b.width << endl; // Output the width
}

int main() {
    Box box; // Creating a Box object
    setWidth(box, 10); // Calling the friend function to set width
    return 0; // Returning 0 to indicate successful execution
}
