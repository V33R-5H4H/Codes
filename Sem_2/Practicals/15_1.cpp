//Write a program to create files with constructor function, open function, and using various file mode parameters
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    string currentLine;
    fout.open("aa.txt");
    while (fout) {
        getline(cin, currentLine);
        if (currentLine == "-1")
            break;
        fout << currentLine << endl;
    }
    fout.close();

    return 0;
}