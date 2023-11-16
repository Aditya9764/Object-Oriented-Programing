#include <bits/stdc++.h>
using namespace std;

// Creating a class named Complex to handle complex numbers
class Complex {
    private:
    int img; // Represents the imaginary part of the complex number
    int real; // Represents the real part of the complex number
    
    public:
    // Constructor to initialize the complex number with default values of 0
    Complex(int i = 0, int r = 0) {
        img = i; // Initializing the imaginary part
        real = r; // Initializing the real part
    }
    
    // Overloading the '+' operator to perform addition of complex numbers
    Complex operator+(Complex const& obj) {
        Complex result; // Creating a new complex number to store the result
        result.real = real + obj.real; // Adding the real parts of the complex numbers
        result.img = img + obj.img; // Adding the imaginary parts of the complex numbers
        return result; // Returning the result of addition
    }
    
    // Method to print the complex number in the form "real + i*imaginary"
    void print() {
        cout << real << " + i" << img << endl; // Printing the complex number
    }
};

// The main function where the program execution begins
int main() {
    // Creating two complex numbers c1 and c2
    Complex c1(10, 30), c2(20, 30);
   
    // Adding two complex numbers using the overloaded '+' operator
    Complex c3 = c1 + c2;
    c3.print(); // Printing the result of the addition
   
    return 0; // Indicating successful completion
}
