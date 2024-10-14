#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

template <typename T> // Template definition
T add(T a, T b) { // Template function to add two values
    return a + b; // Return the sum
}

int main() {
    cout << "Sum (int): " << add(10, 20) << endl; // Calling template function with integers
    cout << "Sum (float): " << add(5.5, 3.3) << endl; // Calling template function with floats
    return 0; // Returning 0 to indicate successful execution
}
