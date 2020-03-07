#include <iostream>
using namespace std;
 
class Test
{
public:
    Test()  { cout << "Constructor is executed\n"; }
    ~Test() { cout << "Destructor is executed\n";  }
};
 
int main()
{
    Test();  // Explicit call to constructor
    //Test t; // local object
    //t.~Test(); // Explicit call to destructor
    return 0;
}
