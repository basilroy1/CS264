#include <iostream>

using std::cout;
using std::endl;

#include "racecar.h"

/* Constructor */
Racecar::Racecar(string n, string c, string s): Car(n, c) {
    sponsor = s;
    gearbox = 6;
    parachuteDeployed = false;
}

/* Setter */
void Racecar::setGearbox(int gears) {
    gearbox = ((gears <= 10 && gears >= 0) ? gears : 6);
}

/* Custom Method */
void Racecar::useParachute() {
    parachuteDeployed = true;
}

/* Printer */
void Racecar::print() const {
    Car::print();

    cout << getName() << " also has " << gearbox
         << " gears and is sponsored by " << sponsor << ". ";

    if (parachuteDeployed)
        cout << Car::getName() << " has used its parachute." << endl;
    else
        cout << Car::getName() << " has not used its parachute." << endl;
}