#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

int add(int a, int b) { // Function to add two integers
    return a + b; // Return the sum
}

int main() {
    int num1 = 5, num2 = 10; // Initializing two integer variables
    cout << "Sum: " << add(num1, num2) << endl; // Calling add function and displaying sum
    return 0; // Returning 0 to indicate successful execution
}
