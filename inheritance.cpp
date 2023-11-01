#include <iostream>

// Base class (parent class)
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }

    void sleep() {
        std::cout << "Animal is sleeping." << std::endl;
    }
};

// Derived class (child class)
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog dog;
    
    // Dog inherits eat() and sleep() methods from Animal
    dog.eat();
    dog.sleep();

    // Dog-specific method
    dog.bark();

    return 0;
}
