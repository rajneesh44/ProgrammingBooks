#include<iostream>
class A
{
	int a=10;
	public: void fo()
	{
		printf("fo called");
		printf("%d",a);
	}
};

int main()
{
	A aa;
	aa.fo();
	return 0;
}
