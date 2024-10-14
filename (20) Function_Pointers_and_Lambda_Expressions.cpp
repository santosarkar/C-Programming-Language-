#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

void greet() { // Simple function to greet
    cout << "Hello, World!" << endl; // Output message
}

int main() {
    void (*funcPtr)() = greet; // Function pointer to greet function
    funcPtr(); // Calling the function using the pointer

    auto lambda = []() { // Lambda expression to print message
        cout << "Hello from Lambda!" << endl; // Output message
    };
    lambda(); // Calling the lambda function
    return 0; // Returning 0 to indicate successful execution
}
