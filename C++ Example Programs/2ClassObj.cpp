#include<iostream>
using namespace std;
class A{
	int a=10;
	//public:
	void foo(void)
	{
		cout<<a;
	}
};
main()
{
	A a;
	a.foo();
	
}
