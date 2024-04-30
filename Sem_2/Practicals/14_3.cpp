/*Write a program to read a list containing item name, item 
code,  and  cost  interactively  and  produce  a  three  column 
output as shown below. 
NAME  CODE  COST 
____________________________ 
Turbo C++ 1001  250.95 
C Primer   905    95.70 
.....     ...    ..... 
.....     ...    ..... 
____________________________ 
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << "Enter item details (or 'exit' to finish):" << endl;
    cout << setw(20) << left << "NAME" << setw(10) << "CODE" << setw(10) << "COST" << endl;
    cout << "____________________________" << endl;

    while (true) {
        string item_name, item_code;
        double item_cost;

        cout << "Enter item name: ";
        getline(cin, item_name);

        if (item_name == "exit")
            break;

        cout << "Enter item code: ";
        getline(cin, item_code);

        cout << "Enter item cost: ";
        cin >> item_cost;
        cin.ignore(); // Clear newline character from input buffer

        cout << setw(20) << left << item_name << setw(10) << item_code << setw(10) << fixed << setprecision(2) << item_cost << endl;
    }

    cout << "____________________________" << endl;

    return 0;
}
/*
#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

struct Item {
    string name;
    int code;
    double cost;
};

int main() {
    const int MAX_ITEMS = 10; // Maximum number of items
    Item items[MAX_ITEMS]; // Array to store item details
    int itemCount = 0; // Counter for the number of items

    // Input loop
    while (itemCount < MAX_ITEMS) {
        cout << "Enter item name (or 'exit' to stop): ";
        cin >> items[itemCount].name;

        if (items[itemCount].name == "exit") {
            break; // Exit loop if user enters "exit"
        }

        cout << "Enter item code: ";
        cin >> items[itemCount].code;

        cout << "Enter item cost: ";
        cin >> items[itemCount].cost;

        itemCount++;
    }

    // Output header
    cout << setw(20) << left << "NAME" << setw(10) << "CODE" << setw(10) << "COST" << endl;
    cout << "____________________________" << endl;

    // Output item details
    for (int i = 0; i < itemCount; i++) {
        cout << setw(20) << left << items[i].name
             << setw(10) << items[i].code
             << setw(10) << fixed << setprecision(2) << items[i].cost << endl;
    }

    cout << "____________________________" << endl;

    return 0;
}
*/