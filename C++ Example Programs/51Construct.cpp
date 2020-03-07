// Cpp program to illustrate the 
// concept of Constructors (Default)
#include <iostream>
using namespace std;
 
class A
{ 
public: 
    int a, b;
         
   A()					// Default Constructor
    {
        a = 10;
        b = 20;
    }
};
 
int main()
{
        
    A c;		// Default constructor called automatically when the object is created
    cout << "a: "<< c.a << endl << "b: "<< c.b;
    return 1;
}
