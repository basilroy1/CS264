#ifndef RACECAR_H
#define RACECAR_H

#include "car.h"

class Racecar: public Car {
    public:
        /* Constructor */
        Racecar(string, string, string);

        /* Setter */
        void setGearbox(int);

        /* Custom Method */
        void useParachute();
        
        /* Printer */
        void print() const;

    private:
        /* Private Members */
        int gearbox;
        string sponsor;
        bool parachuteDeployed;
};

#endif