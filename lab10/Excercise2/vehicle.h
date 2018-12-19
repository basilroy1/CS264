#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using std::ostream;

#include <string>

using std::string;

class Vehicle {
    public:
        /* Constructor */
        Vehicle(const int, const int, string, double, const int);

        /* Getters */
        int getNumberOfDoors() const;
        int getNumberOfCylinders() const;
        string getColor() const;
        double getFuelLevel() const;
        int getTransmissionType() const;
        string getClassName() const;

        /* Setters */
        void setColor(string);
        void setFuelLevel(double);
        void setClassName(string);
        
    private:
        /* Private Members */
        const int numberOfDoors;
        const int numberOfCylinders;
        string vehicleColor;
        double fuelLevel;
        const int transmissionType;
        string className;

        /* Printer */
        friend ostream& operator<<(ostream &, const Vehicle &);
};

#endif