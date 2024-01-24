/*  a shallow copy constructor creates a new object and copies the values of the members from the original object to the new one.
  However, if the object contains pointers, a shallow copy only copies the memory addresses of the pointed data, not the data itself
This means both the original and copied objects share the same dynamically allocated memory, leading to potential issues if one object modifies the shared data.

  
On the other hand, a deep copy constructor creates a new object and copies not only the values of the members but also duplicates the dynamically allocated memory pointed to by the pointers.
This ensures that the original and copied objects have their own separate copies of the data, preventing unintended side effects when one object modifies the data.



  In summary, the main difference lies in how they handle dynamically allocated memory and pointers. Shallow copy shares the same memory, while deep copy creates independent copies of the data

// Note: C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform shallow copy at compile time
// Shallow copy constructer is created by compailer own  no need to write it 


// we have to write deep copy constructer 
*/

#include <iostream>  
using namespace std;  
class Demo  
{  
    public:  
    int a;  
    int b;  
    int *p;  
  
    Demo()  
    {  
        p=new int;  
    }  
    Demo(Demo &d)  
    {  
        a = d.a;  
        b = d.b;  
        p = new int;  
        *p = *(d.p);  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  
};  
int main()  
{  
  Demo d1;  
  d1.setdata(4,5,7);  
  Demo d2 = d1;  
  d2.showdata();  
  return 0;  
}  


