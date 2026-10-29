#pragma once

class Atom {
private:
    int protons;
    int neutrons;
    int electrons;

public:
    Atom(int p, int n, int e);

    int getProtons();
    int getNeutrons();
    int getElectrons();

    int getMassNumber();
    int getNetCharge();
};