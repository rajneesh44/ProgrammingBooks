#include <iostream>
using namespace std;


class a
{
protected:
int protected_member;
public:
	void foo()
	{
		protected_member=10;
		printf("Hello----%d------",protected_member);
	}
};

int main()
{
a myobject;
myobject.foo();

}

