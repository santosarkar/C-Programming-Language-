#include <iostream> // Including the standard input-output stream
using namespace std; // Using the standard namespace

int main() {
    int num; // Declaring an integer variable
    cout << "Enter a number: "; // Asking the user for input
    cin >> num; // Taking input

    if (num > 0) { // If number is greater than 0
        cout << "Positive number" << endl; // Output positive message
    } else if (num < 0) { // If number is less than 0
        cout << "Negative number" << endl; // Output negative message
    } else { // If number is 0
        cout << "Zero" << endl; // Output zero message
    }

    for (int i = 0; i < 5; i++) { // Loop from 0 to 4
        cout << "i: " << i << endl; // Print value of i in each iteration
    }
    return 0; // Returning 0 to indicate successful execution
}
