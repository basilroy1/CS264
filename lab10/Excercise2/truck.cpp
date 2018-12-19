#include "truck.h"

/* Constructor */
Truck::Truck(double f) : Vehicle(2, 16, "black", f, 8) {
    cargo = false;
    setClassName("Truck");
}

/* Getter */
bool Truck::hasCargo() const {
    return cargo;
}

/* Setter */
void Truck::setCargo(bool c) {
    cargo = c;
}

/* Printer */
ostream &operator<<(ostream &output, const Truck &t){
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

    if (t.cargo)
        output << "\tThe truck is currently carrying cargo.\n";

    else
        output << "\tThe truck is not carrying cargo.\n";

    return output;
}
