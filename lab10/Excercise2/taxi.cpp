#include "taxi.h"

/* Constructor */
Taxi::Taxi(double f) : Vehicle(4, 6, "yellow", f, 5) {
    customers = false;
    setClassName("Taxi");
}

/* Getter */
bool Taxi::hasCustomers() const {
    return customers;
}

/* Setter */
void Taxi::setCustomers(bool customers) {
    this -> customers = customers;
}

/* Printer */
ostream &operator<<(ostream &output, const Taxi &t) {
    output << t.getClassName() << "\n"
           << "\tNumber of doors: "
           << t.getNumberOfDoors()
           << "\n\tNumber of cylinders: "
           << t.getNumberOfCylinders()
           << "\n\tTransmission type: "
           << t.getTransmissionType()
           << "\n\tColor: " << t.getColor()
           << "\n\tFuel level: "
           << t.getFuelLevel() << "\n";

    if (t.customers)
        output << "\tThe taxi has passengers.\n";

    else
        output << "\tThe taxi currently has no passengers.\n";

    return output;
}