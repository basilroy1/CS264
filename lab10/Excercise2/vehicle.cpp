#include <iostream>

using std::cout;
using std::endl;

#include "vehicle.h"



/* Constructor */
Vehicle::Vehicle(const int doors, const int cylinders, string color,
                 double initialFuel, const int transmission)
                 : numberOfDoors(doors), numberOfCylinders(cylinders),
                 transmissionType(transmission) {
    vehicleColor = color;
    fuelLevel = initialFuel;
    className = "Vehicle";
}

/* Getters */
int Vehicle::getNumberOfDoors() const {
    return numberOfDoors;
}

int Vehicle::getNumberOfCylinders() const {
    return numberOfCylinders;
}

string Vehicle::getColor() const {
    return vehicleColor;
}

double Vehicle::getFuelLevel() const {
    return fuelLevel;
}

int Vehicle::getTransmissionType() const {
    return transmissionType;
}

string Vehicle::getClassName() const {
    return className;
}

/* Setters */
void Vehicle::setColor(string c) {
    vehicleColor = c;
}

void Vehicle::setFuelLevel(double amount) {
    if (amount > 0.0 && amount <= 20.0)
        fuelLevel = amount;

    else
        fuelLevel = 5.0;
}

void Vehicle::setClassName(string newName) {
    className = newName;
}

/* Printer */
ostream &operator<<(ostream &out, const Vehicle &v) {
    out << v.className << "\n"
        << "\tNumber of doors: " << v.numberOfDoors
        << "\n\tNumber of cylinders: " << v.numberOfCylinders
        << "\n\tTransmission type: " << v.transmissionType
        << "\n\tColor: " << v.vehicleColor
        << "\n\tFuel level: " << v.fuelLevel << endl;

    return out;
}