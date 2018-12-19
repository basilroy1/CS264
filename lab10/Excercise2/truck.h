#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

#include "vehicle.h"

class Truck : public Vehicle {
    public:
        /* Constructor */
        Truck(double);

        /* Getter */
        bool hasCargo() const;
        
        /* Setter */
        void setCargo(bool);

    private:
        /* Private Member */
        bool cargo;

        /* Printer */
        friend ostream& operator<<(ostream &, const Truck &);
};

#endif