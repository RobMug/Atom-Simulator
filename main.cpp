#include <iostream>
#include <string>
#include <iterator>

int main() {

    int p, n, e;

    std::string elements[] = {
        "Hydrogen",
        "Helium",
        "Lithium",
        "Beryllium",
        "Boron",
        "Carbon",
        "Nitrogen",
        "Oxygen",
        "Fluorine",
        "Neon"
    };


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

    if (p <= std::size(elements)){
        std::cout << "Element: " << elements[p-1] << '\n';
    }
    else {
        std::cout << "Element: Not currently supported" << '\n';
    }
}