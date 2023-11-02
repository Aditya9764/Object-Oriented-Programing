#include <bits/stdc++.h>
using namespace std;
class Animal {    
    public:    
  virtual  void eat()
    {      
        cout<<"Animal is Eating...";      
    }        
};     
class Dog: public Animal      
{      
 public:    
 void eat()      
    {         
        cout<<"Dog is Eating bread...";      
    }      
}; 

int main()
{
    Animal* mydog = new Dog();    // Polymorphic behavior
    mydog->eat();                  // Calls the overridden method
  delete mydog ;                  // Remember to free memory in a real application
    
    return 0;
}
