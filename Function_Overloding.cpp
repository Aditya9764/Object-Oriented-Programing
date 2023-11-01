
#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    // Function to add two integers
    void add(int a , int b)
    {
        cout<<a+b<<endl;
    }
    
    // Function to add three integers (overloaded version of the 'add' function)
    void add(int a , int b , int c)
    {
        cout<<a+b+c<<endl;
    }
};

int main()
{
    base obj;
obj.add(5,5) ;
obj.add(5,5,5);
    
    return 0;
}
