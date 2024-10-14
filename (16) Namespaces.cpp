#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

namespace First { // Defining a namespace named First
    void display() { // Function within the First namespace
        cout << "First Namespace" << endl; // Output message
    }
}

namespace Second { // Defining a namespace named Second
    void display() { // Function within the Second namespace
        cout << "Second Namespace" << endl; // Output message
    }
}

int main() {
    First::display(); // Calling display function from First namespace
    Second::display(); // Calling display function from Second namespace
    return 0; // Returning 0 to indicate successful execution
}
