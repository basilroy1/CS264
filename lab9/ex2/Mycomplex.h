
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
    MyComplex operator+(const MyComplex &z); // Arithmetic
    MyComplex operator-(const MyComplex &z);
    MyComplex operator*(const MyComplex &z);

    void print();
};]