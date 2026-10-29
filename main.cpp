#include <iostream>     // std::cout, std::cin
#include "Element.h"    // Element
#include "Atom.h"       // Atom

int main () {
    int p, n, e;

    std::cout << "Enter the number of Protons, Neutrons, and Electrons below:" << std::endl;
    std::cin >> p >> n >> e;

    if (p <= 0 || n < 0 || e < 0) {
        std::cout << "Invalid Input(s)" << '\n';
        return 1;
    }

    Atom atom(p, n, e);

    std::cout << "Protons: " << atom.getProtons() << '\n';
    std::cout << "Neutrons: " << atom.getNeutrons() << '\n';
    std::cout << "Electrons: " << atom.getElectrons() << '\n';

    std::cout << "\nMass Number: " << atom.getMassNumber() << '\n';
    std::cout << "Net Charge: " << atom.getNetCharge() << '\n';

    // atom.getProtons() works because we already filtered out
    // anything negative or that is equal to 0
    if (atom.getProtons() <= elementSize) {
        std::cout << "\nElement: " << elements[atom.getProtons()-1].name << '\n';
        std::cout << "Symbol: " << elements[atom.getProtons()-1].symbol << '\n';
        std::cout << "Atomic Number: " << elements[atom.getProtons()-1].atomicNumber << '\n';
    }
    else {
        std::cout << "Element: Not currently supported" << '\n';
    }

    return 0;
}
