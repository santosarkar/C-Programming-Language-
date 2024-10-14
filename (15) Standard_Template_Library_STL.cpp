#include <iostream> // Including the standard input-output stream
#include <vector> // Including the vector container
using namespace std; // Using the standard namespace

int main() {
    vector<int> vec = {1, 2, 3, 4, 5}; // Initializing a vector of integers

    for (int i : vec) { // Looping through the vector using range-based loop
        cout << i << " "; // Output each element
    }
    cout << endl; // New line
    vec.push_back(6); // Adding an element to the vector

    for (int i = 0; i < vec.size(); i++) { // Looping through the vector using index
        cout << vec[i] << " "; // Output each element
    }
    cout << endl; // New line
    return 0; // Returning 0 to indicate successful execution
}
