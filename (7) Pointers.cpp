#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

int main() {
    int *ptr = new int(10); // Allocating memory dynamically for an integer
    cout << "Value: " << *ptr << endl; // Displaying the value pointed by ptr
    delete ptr; // Releasing the allocated memory
    return 0; // Returning 0 to indicate successful execution
}
