#include <iostream>

int main() {

    int p, n, e;

    std::cout << "Enter the number of Protons, Neutrons, and Electrons below:" << std::endl;
    std::cin >> p >> n >> e;

    std::cout << "Protons: " << p << '\n';
    std::cout << "Neutrons: " << n << '\n';
    std::cout << "Electrons: " << e << '\n';

    std::cout << "\nMass Number: " << p + n << '\n';
    std::cout << "Net Charge: " << p - e << '\n';
}