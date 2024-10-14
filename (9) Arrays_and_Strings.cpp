#include <iostream> // Including the standard input-output stream
#include <string> // Including the string library
using namespace std; // Using the standard namespace

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Initializing an array of 5 integers
    for (int i = 0; i < 5; i++) { // Looping through the array
        cout << "Element " << i << ": " << arr[i] << endl; // Displaying each element
    }

    string str = "Hello, C++!"; // Initializing a string
    cout << "String: " << str << endl; // Displaying the string
    return 0; // Returning 0 to indicate successful execution
}
