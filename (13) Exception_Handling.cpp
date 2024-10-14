#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

int main() {
    try { // Try block for potentially error-prone code
        int num1 = 10, num2 = 0; // Initializing two integers
        if (num2 == 0) { // If denominator is zero
            throw "Division by zero error!"; // Throw an error
        }
        cout << "Result: " << num1 / num2 << endl; // Division operation
    } catch (const char* msg) { // Catch block to handle exceptions
        cout << msg << endl; // Output the error message
    }
    return 0; // Returning 0 to indicate successful execution
}
