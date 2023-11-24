#include <iostream>
using namespace std;

class Half {
private:
    int a; // Private variable to store the calculated half value
    int b; // Private variable to hold the input value.

public:
    // Setter method to set the value of 'b'
    void setB(int value) {
        b = value; // Set the private variable 'b' to the provided value
    }

    // Getter method to calculate and retrieve the value of 'a' (half of 'b')
    int getA() {
        a = b / 2; // Calculate half of 'b' and store it in 'a'
        return a; // Return the calculated half value
    }
};

int main() {
    int n = 50; // Input value

    Half result; // Creating an object of the 'Half' class

    // Setting the input value using the setter method
    result.setB(n);

    // Retrieving and outputting the calculated half value using the getter method
    int halfValue = result.getA();
    cout << "Half of " << n << " is: " << halfValue << endl;

    return 0;
}

