// C++ program to explain multilevel inheritance
#include <iostream>
using namespace std;
 

class Base 				// base class
{
  public:
    Base()
    {
      cout << "This is a Base Class Constructor" << endl;
    }
};
 

class Intr: public Base			//(intermediate class) sub class derived from base classes 
{
 	//Derived classes body
 	public:
    Intr()
    {
      cout << "This is a intermediate Class Constructor" << endl;
    }
};
 
class Child: public Intr			//(leaf class) sub class derived from intermediate classes 
{
 	//Derived classes body
 	public:
    Child()
    {
      cout << "This is a Child Class Constructor" << endl;
    }
};
 
int main()
{   
	//Base b;
	//Intr i;
    // creating object of sub class will
    // invoke the constructor of base classes
    Child c;
	return 0;
}
