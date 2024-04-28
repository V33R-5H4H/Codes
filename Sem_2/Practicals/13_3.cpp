//Write a program to produce formatted output using the following functions: Width(), Precision(), Fill(), Setf(), Unsetf()
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

    return 0;
}
