// C++ program for function overloading
#include <bits/stdc++.h>
using namespace std;
class A
{
    public:
     
    
    void func(int x) 												// function with 1 int parameter
    {
        cout << "value of x is " << x << endl;
    }
     
    
    void func(double x)												// function with same name but 1 double parameter				
    {
        cout << "value of x is " << x << endl;
    }
     
    
    void func(int x, int y)											// function with same name and 2 int parameters
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
};
 
int main() {
     
    A a;
     
    // Which function is called will depend on the parameters passed
    
    a.func(7);														// The first 'func' is called 
    a.func(9.132);													// The second 'func' is called
    a.func(85,64); 													// The third 'func' is called
   
    return 0;
} 
