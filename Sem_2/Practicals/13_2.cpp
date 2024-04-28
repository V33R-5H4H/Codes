//Write a program to use the following functions: Put(), Get(), Getline(), Write()
#include <iostream>
#include <string>
using namespace std;
int main() {
    char ch = 'A';
    cout.put(ch);
    char inputChar;
    cout << "\nEnter a character: ";
    cin.get(inputChar);
    cout << "You entered: " << inputChar << endl;
    string inputLine;
    cout << "Enter a line of text: ";
    getline(cin, inputLine);
    cout << "You entered: " << inputLine << endl;
    char buffer[] = "Hello, World!";
    cout.write(buffer, 5);
    return 0;
}
