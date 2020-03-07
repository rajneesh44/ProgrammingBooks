#include<iostream>
using namespace std;
 

class A
{
public:
   void printThis() const
   {
    cout<<this<<endl;   
   }
   
};

main()
{
	A a;
	cout<<&a<<endl;
	a.printThis();
	A b;
	cout<<&b<<endl;
	b.printThis();
	A* c=new A; //new is used to allocate memory for object then calls the corresponding constructor
	cout<<c<<endl;
	c->printThis();
	delete c;

}
