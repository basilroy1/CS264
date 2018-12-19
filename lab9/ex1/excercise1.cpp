#include <iostream>
#include "MyComplex.h"

using namespace std;

int main() {
    double r, i;

    cout << "Enter the real component of complex number 'a': ";
    cin >> r;

    cout << "Enter the imaginary component of complex number 'a': ";
    cin >> i;

    MyComplex a(r, i); // Use of custom constructor
    cout << "a = ";
    a.print(); // Use of print method

    cout << "Enter the real component of complex number 'b': ";
    cin >> r;

    cout << "Enter the imaginary component of complex number 'b': ";
    cin >> i;

    MyComplex b(r, i);
    cout << "b = ";
    b.print();

    MyComplex c; // Use of default constructor

    c = a.Add(b); // Use of addition method
    cout << endl << "a + b = ";
    c.print();

    c = a.Subtract(b); // Use of subtraction method
    cout << "a - b = ";
    c.print();

    c = a.Multiply(b); // Use of multiplication method
    cout << "a * b = ";
    c.print();

    cout << endl << "Enter the real component of complex number 'c': ";
    cin >> r;
    c.setReal(r); // Use of setter

    cout << "Enter the imaginary component of complex number 'c': ";
    cin >> i;
    c.setImaginary(i);

    cout << "c = " << c.getReal() << " + " << c.getImaginary() << "i" << endl;
}