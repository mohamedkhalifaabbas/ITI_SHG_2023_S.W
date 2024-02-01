
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Setters
    void setReal(double r) { real = r; }
    void setImag(double i) { imag = i; }

    // Getters
    double getReal() const { return real; }
    double getImag() const { return imag; }

    // Member functions
    inline void PrintComplex() const {
        std::cout << "Complex Number: " << real << " + " << imag << "i" << std::endl;
    }

    Complex AddComplex(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex SubComplex(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    // Creating complex numbers
    Complex complex1(2.5, 3.0);
    Complex complex2(1.5, 2.0);

    // Printing complex numbers
    complex1.PrintComplex();
    complex2.PrintComplex();

    // Adding complex numbers
    Complex sum = complex1.AddComplex(complex2);
    std::cout << "Sum: ";
    sum.PrintComplex();

    // Subtracting complex numbers
    Complex difference = complex1.SubComplex(complex2);
    std::cout << "Difference: ";
    difference.PrintComplex();

    return 0;
}
