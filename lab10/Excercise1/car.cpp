#include <iostream>

using std::cout;
using std::endl;

#include "car.h"

/* Constructor */
Car::Car(string name, string color) {
    this -> name = name;
    this -> color = color;
    maxSpeed = 95;
    engineValves = 4;
}

/* Getters */
int Car::getMaxSpeed() const {
    return maxSpeed;
}

int Car::getEngineValves() const {
    return engineValves;
}

string Car::getName() const {
    return name;
}

string Car::getColor() const {
    return color;
}

/* Setters */
void Car::setMaxSpeed(int s) {
    maxSpeed = ((s >= 0 && s < 250) ? s : 40);
}

void Car::setEngineValves(int v) {
    engineValves = ((v >= 0 && v < 50) ? v : 4);
}

/* Printer */
void Car::print() const {
    cout << "Car: " << name << " is " << color << " and has a "
         << engineValves << "-valve engine. MAX SPEED = "
         << maxSpeed << " mph. " << endl;
}