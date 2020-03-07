// C++ program to explain multiple inheritance
#include <iostream>
using namespace std;
 

class Base1 				// base class1
{
  public:
    Base1()
    {
      cout << "This is a Base Class 1 Constructor" << endl;
    }
};
 

class Base2			// base class2 
{
 	
 	public:
    Base2()
    {
      cout << "This is a Base Class 2 Constructor" << endl;
    }
};
 
class Child: public Base1, Base2			// sub class derived from 2 base classes 
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
    // creating object of sub class will
    // invoke the constructor of base classes
    Child c;
	return 0;
}
