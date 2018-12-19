#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using std::string;

class Car {
    public:
        /* Constructor */
        Car(string name, string color);

        /* Getters */
        int getMaxSpeed() const;
        int getEngineValves() const;
        string getColor() const;
        string getName() const;

        /* Setters */
        void setMaxSpeed(int);
        void setEngineValves(int);

        /* Printer */
        void print() const;

    private:
        /* Members */
        int maxSpeed;
        int engineValves;
        string color;
        string name;
};

#endif