//Use various flags and bit fields to produce formatted output.
#include <iostream>
#include <iomanip> // Required for formatting functions

int main() {
    double value = 123.456;

    // Set width to 10 characters, fill with '*'
    std::cout << std::setw(10) << std::setfill('*') << value << std::endl;

    // Set precision to 2 decimal places
    std::cout << std::setprecision(2) << value << std::endl;

    // Reset fill character
    std::cout.unsetf(std::ios::adjustfield);

    // Set scientific notation
    std::cout << std::scientific << value << std::endl;

    // Bit fields example
    struct Flags {
        bool flag1 : 1; // 1-bit flag
        bool flag2 : 1; // 1-bit flag
        bool flag3 : 1; // 1-bit flag
    };

    Flags myFlags;
    myFlags.flag1 = true;
    myFlags.flag2 = false;
    myFlags.flag3 = true;

    std::cout << "Flag 1: " << myFlags.flag1 << std::endl;
    std::cout << "Flag 2: " << myFlags.flag2 << std::endl;
    std::cout << "Flag 3: " << myFlags.flag3 << std::endl;

    return 0;
}

/*#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout.width(8);
    cout<<"CODE 1"<<"\n";
    cout.fill('*');
    cout.setf(ios::right,ios::adjustfield);
    cout.width(8);
    cout<<"1234"<<"\n";
   return 0;
}*/