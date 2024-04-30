//Write a program to use the following functions: Seekg(),Tellg(), Seekp(), Tellp(), Put(), Get(), Write(), Read()
#include <iostream>
#include <fstream> // For file stream operations

using namespace std;

int main() {
    // Create a sample file named "sample.txt"
    ofstream outFile("sample.txt");

    // Write data to the file
    outFile << "Hello, this is some sample text." << endl;
    outFile << "Welcome to the world of file handling!" << endl;

    // Close the file
    outFile.close();

    // Open the file for reading
    ifstream inFile("sample.txt");

    // Read data from the file
    char ch;
    while (inFile.get(ch)) {
        cout << ch; // Print each character
    }

    // Get the current position in the file
    streampos pos = inFile.tellg();
    cout << "\nCurrent position in the file: " << pos << " bytes" << endl;

    // Seek to the beginning of the file
    inFile.seekg(0, ios::beg);

    // Read and print the entire file content
    string content;
    while (getline(inFile, content)) {
        cout << content << endl;
    }

    // Close the file
    inFile.close();

    return 0;
}
