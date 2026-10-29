#include "Atom.h"

Atom::Atom(int p, int n, int e) {
    protons = p;
    neutrons = n;
    electrons = e;
}

int Atom::getProtons() {return protons;}
int Atom::getNeutrons() {return neutrons;}
int Atom::getElectrons() {return electrons;}

int Atom::getMassNumber() {return protons + neutrons;}
int Atom::getNetCharge() {return protons - electrons;}