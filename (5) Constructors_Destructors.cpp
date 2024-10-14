#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Rectangle {
public:
    int length, width; // Public member variables for length and width
    Rectangle(int l, int w) : length(l), width(w) {} // Constructor to initialize length and width
    ~Rectangle() { // Destructor
        cout << "Object destroyed" << endl; // Message when object is destroyed
    }
    int area() { // Function to calculate area
        return length * width; // Return the area
    }
};

int main() {
    Rectangle rect(10, 5); // Creating an object with length 10 and width 5
    cout << "Area: " << rect.area() << endl; // Calling area function and displaying it
    return 0; // Returning 0 to indicate successful execution
}
