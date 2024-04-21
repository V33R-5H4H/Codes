//Write a program to use the following functions: Put(), Get(), Getline(), Write()
#include <iostream>
#include <string>
using namespace std;
int main() {
    // put(): Output a character
    char ch = 'A';
    cout.put(ch); // Output character 'A'
    // get(): Read a character from input
    char inputChar;
    cout << "\nEnter a character: ";
    cin.get(inputChar);
    cout << "You entered: " << inputChar << endl;
    // getline(): Read a line of text
    string inputLine;
    cout << "Enter a line of text: ";
    cin.ignore(); // Clear newline left in the buffer
    getline(cin, inputLine);
    cout << "You entered: " << inputLine << endl;
    // write(): Write characters from a buffer
    char buffer[] = "Hello, World!";
    cout.write(buffer, 5); // Write the first 5 characters
    return 0;
}
