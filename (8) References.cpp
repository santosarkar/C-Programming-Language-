#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

void swap(int &a, int &b) { // Function to swap two values using references
    int temp = a; // Storing value of a in temp
    a = b; // Assigning value of b to a
    b = temp; // Assigning value of temp to b
}

int main() {
    int x = 10, y = 20; // Initializing two integers
    swap(x, y); // Calling swap function
    cout << "x: " << x << " y: " << y << endl; // Displaying swapped values
    return 0; // Returning 0 to indicate successful execution
}

