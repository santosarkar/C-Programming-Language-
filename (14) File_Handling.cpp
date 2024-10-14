#include <iostream> // Including the standard input-output stream
#include <fstream> // Including file stream library
using namespace std; // Using the standard namespace

int main() {
    ofstream outFile("example.txt"); // Opening a file in write mode
    outFile << "Hello, File!" << endl; // Writing to the file
    outFile.close(); // Closing the file

    ifstream inFile("example.txt"); // Opening the file in read mode
    string content; // Variable to hold the content
    while (getline(inFile, content)) { // Reading the file line by line
        cout << content << endl; // Output the content of the file
    }
    inFile.close(); // Closing the file
    return 0; // Returning 0 to indicate successful execution
}
