// C++ program to show that scope resolution operator :: is used
// to define a function outside a class
#include<iostream> 
using namespace std;
 
class A 
{
public: 
 
   // Only declaration
   void fun();
};
 
// Definition outside class using ::
void A::fun()
{
   cout << "fun() called";
}
 
int main()
{
   A a;
   a.fun();
   return 0;
}
