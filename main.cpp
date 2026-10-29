#include <iostream>     // std::cout, std::cin
#include "Element.h"    // Element

int main () {
    int p, n, e;
    
    std::cout << "Enter the number of Protons, Neutrons, and Electrons below:" << std::endl;
    std::cin >> p >> n >> e;

    if (p <= 0 || n < 0 || e < 0) {
        std::cout << "Invalid Input(s)" << '\n';
        return 1;
    }

    std::cout << "Protons: " << p << '\n';
    std::cout << "Neutrons: " << n << '\n';
    std::cout << "Electrons: " << e << '\n';

    std::cout << "\nMass Number: " << p + n << '\n';
    std::cout << "Net Charge: " << p - e << '\n';

    if (p <= elementSize) {
        std::cout << "Element: " << elements[p-1].name << '\n';
        std::cout << "Symbol: " << elements[p-1].symbol << '\n';
        std::cout << "Atomic Number: " << elements[p-1].atomicNumber << '\n';
    }
    else {
        std::cout << "Element: Not currently supported" << '\n';
    }

    return 0;
}
