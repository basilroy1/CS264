#include "MyComplex.h"
#include <iostream>

using namespace std;

// Constructors
MyComplex::MyComplex() {
    real = 0.0;
    imaginary = 0.0;
}

MyComplex::MyComplex(double r, double i) {
    real = r;
    imaginary = i;
}

// Getters
double MyComplex::getReal() {
    return real;
}

double MyComplex::getImaginary() {
    return imaginary;
}

// Setters
void MyComplex::setImaginary(double i) {
    imaginary = i;
}

void MyComplex::setReal(double r) {
    real = r;
}

// Arithmetic
MyComplex MyComplex::operator+(const MyComplex &z) {
    double r = real + z.real;
    double i = imaginary + z.imaginary;

    return MyComplex(r, i);
}

MyComplex MyComplex::operator-(const MyComplex &z) {
    double r = real - z.real;
    double i = imaginary - z.imaginary;

    return MyComplex(r, i);
}

MyComplex MyComplex::operator*(const MyComplex &z) {
    double x = real, y = imaginary, u = z.real, v = z.imaginary;

    double r = ((x * u) - (y * v));
    double i = ((x * v) + (y * u));

    return MyComplex(r, i);
}

// Other methods
void MyComplex::print() {
    cout << real << " + " << imaginary << "i" << endl;
}