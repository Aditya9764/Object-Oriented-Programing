// Implement deep copy constructor 
// Implement shallow copy constructor 
// simple copy constructor 
//  This is basic examples of copy constructor i will write difficult one sk I'm writing this comment 
#include <iostream>  
using namespace std;  
class A  
{  
   public:  
    int x;  
    A(int a)                // parameterized constructor.  
    {  
      x=a;  
    }  
    // always used const before class it show that you are good at syntaxing
    A(const A &i)               // copy constructor  
    {  
        x = i.x;  
    }  
};  
int main()  
{  
  A a1 = 10 ;   // A a1(10)             // Calling the parameterized constructor.  
 A a2 = a1;     // A a2(a1)           //  Calling the copy constructor.  
 cout<<a2.x;  
  return 0;  
} 
//output 10 
