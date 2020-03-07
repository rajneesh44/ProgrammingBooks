// C++ program to explain multilevel inheritance
#include <iostream>
using namespace std;
 

class Base 				// base class
{
  public:
    void show()
    {
      cout << "This is a Base Class" << endl;
    }
};
 

class Derived : public Base 				// base class
{
  public:
    void show()
    {
      cout << "This is a Derived Class" << endl;
    }
};
 
int main()
{   
	Base *b;
	Derived d;
	b = &d;
	b -> show();
	return 0;
}
