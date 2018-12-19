#pragma once

using namespace std;

class MyComplex {
protected:
    double real;
    double imaginary;
public:
    double getReal(); // Getters
    double getImaginary();
    void setReal(double); // Setters
    void setImaginary(double);
    MyComplex(); // Constructors
    MyComplex(double, double);
    MyComplex Add(const MyComplex &z); // Arithmetic
    MyComplex Subtract(const MyComplex &z);
    MyComplex Multiply(const MyComplex &z);

    void print(); // Other methods
};