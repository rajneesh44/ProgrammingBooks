#include<iostream>
using namespace std;
 

class A
{
	int x;
public:
	A(int x)
	{
	this->x=x; 	// The 'this' pointer is used 
				//to retrieve the object's x
       			// hidden by the local variable 'x'
	}	
   void printThis() const
   {
    cout<<this<<endl; 
	cout<<x<<endl;  
   }
   
};

main()
{
	A a(10);
	a.printThis();
}
