//Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
/*
  If we consider a real-life scenario, a child inherits from its father and mother.
  So a Child can be represented as a derived class with “Father” and “Mother” as its parents.

  In multiple inheritance, the constructors of an inherited class are executed in the order that they are inherited. 
  On the other hand, destructors are executed in the reverse order of their inheritance.
  */

// code for multiple inheritance

/*

#include<iostream>
using namespace std; 
class A //base class A with constructor and destructor
{
public:

  A() { cout << "class A::Constructor" << endl; }
  
  ~A() { cout << "class A::Destructor" << endl; }
  
};

class B //base class B with constructor and destructor
{
public:

  B() { cout << "class B::Constructor" << endl; }

  ~B() { cout << "class B::Destructor" << endl; }
};
class C: public B, public A //derived class C inherits class A and then class B (note the order)
{
public:
 
  C() { cout << "class C::Constructor" << endl; }
 
  ~C() { cout << "class C::Destructor" << endl; }
};

int main(){
    
    C c;
    
    return 0;
}

 //we see that the constructors are called in order B, A, and C while the destructors are in the reverse order.
 //Now that we know the basics of multiple inheritance, we move on to discuss the Diamond Problem

*/

//The Diamond Problem occurs when a child class inherits from two parent classes who both share a common grandparent class. 
//we have a class Child inheriting from classes Father and Mother. These two classes, in turn, inherit the class Person because both Father and Mother are Person.

 //class Child inherits the traits of class Person twice—once from Father and again from Mother. This gives rise to ambiguity since the compiler fails to understand which way to go.

#include<iostream>
using namespace std;

class Person { //class Person
public:
        // constructor 
    Person(int x)
    {
        cout << "Person::Person(int) called" << endl; 
    }
};
 
class Father : public Person { //class Father inherits Person
public:

    Father(int x):Person(x)
    {
       cout << "Father::Father(int) called" << endl;
    }
};
 
class Mother : public Person { //class Mother inherits Person
public:
    Mother(int x):Person(x) 
    {
        cout << "Mother::Mother(int) called" << endl;
    }
};
 
class Child : public Father, public Mother 
{ //Child inherits Father and Mother
public:
    Child(int x):Mother(x), Father(x) {
        cout << "Child::Child(int) called" << endl;
    }
};
 
int main() {
    Child child(30);
}


//The solution to the diamond problem is to use the virtual keyword
