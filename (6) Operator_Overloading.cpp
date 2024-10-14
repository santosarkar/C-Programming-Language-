#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

class Complex {
public:
    int real, imag; // Public member variables for real and imaginary parts
    Complex(int r = 0, int i = 0) : real(r), imag(i) {} // Constructor with default values

    Complex operator + (const Complex& obj) { // Overloading the + operator
        return Complex(real + obj.real, imag + obj.imag); // Return the result of addition
    }
};

int main() {
    Complex c1(5, 4), c2(2, 3); // Creating two complex number objects
    Complex c3 = c1 + c2; // Using overloaded + operator
    cout << "Result: " << c3.real << " + " << c3.imag << "i" << endl; // Displaying result
    return 0; // Returning 0 to indicate successful execution
}
