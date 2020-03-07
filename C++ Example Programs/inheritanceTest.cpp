// C++ program to explain Single inheritance
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
 

class Child: public Base			// sub class derived from base classes
{
 	public:
	 Child():Base()
 	{
 		cout<<"this is child class constructor"<<endl;
	 }
	 //Derived classes body
 	
};
 

int main()
{   
    // creating object of sub class will
    // invoke the constructor of base classes
    Child c;
	return 0;
}
