
#include <bits/stdc++.h>

using namespace std;
/*
class parent
{
    public:
    void display()
    {
        cout<<"this is base class"<<endl ;
    }
};

class child : public parent
{
    public:
    void display()
    {
        cout<<"This is child class" ;
    }
};
*/
class Animal {    
    public:    
    void eat()
    {      
        cout<<"Eating...";      
    }        
};     
class Dog: public Animal      
{      
 public:    
 void eat()      
    {         
        cout<<"Eating bread...";      
    }      
}; 

int main()
{
   // child obj ;
    // obj.display();

    Dog d;
    d.eat();
    return 0;
}
