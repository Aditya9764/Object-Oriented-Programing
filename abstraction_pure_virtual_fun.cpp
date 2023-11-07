#include <bits/stdc++.h>
using namespace std;

// Abstract class 'shape' demonstrating Abstraction
class shape {
public:
    // Pure virtual function for calculating area
    virtual void calculate_Area() = 0;
};

// Derived class 'circle' implementing 'shape'
class circle : public shape {
private:
    int radius;

public:
    // Constructor for circle class
    circle(int r) {
        radius = r;
    }

    // Implementation of the pure virtual function
    void calculate_Area() {
        cout << "Area of the circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    // Creating an object of the derived class
    circle c(10);

    // Accessing the method provided by the abstract class
    c.calculate_Area();

    return 0;
}
