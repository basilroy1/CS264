#ifndef TAXI_H
#define TAXI_H

#include <iostream>

#include "vehicle.h"

class Taxi : public Vehicle {
    public:
        /* Constructor */
        Taxi(double);

        /* Getter */
        bool hasCustomers(void) const;
        
        /* Setter */
        void setCustomers(bool);

    private:
        /* Private Members */
        bool customers;

        /* Printer */
        friend ostream& operator<<(ostream &, const Taxi &);
};

#endif