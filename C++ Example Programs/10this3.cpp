#include<iostream>
using namespace std;
class Test
{
private:
  int x;int y;
public:
  Test(int x,int y) 
	{ 
  		this->x = x; this->y = y; 
	}
  Test &setX(int a) 
  	{ 
	  x=a; return *this; 
	}
  Test &setY(int b) 
  	{ 
	  y=b; return *this; 
	}
  void print(){cout<<"x="<<x<<"  y="<<y<<endl;}
};
int main()
{
  Test obj1(5, 5);
  // Chained function calls.  All calls modify the same object
 // as the same object is returned by reference
  obj1.print();

  obj1.setX(10).setY(20);
 
  obj1.print();
  return 0;
}
