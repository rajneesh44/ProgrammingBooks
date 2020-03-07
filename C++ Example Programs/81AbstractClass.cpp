// pure virtual functions make a class abstract
#include<iostream>
using namespace std;
 
class Test
{
   int x;
public:
    virtual void show() = 0;
    int getX() { return x; }
};
 
int main(void)
{
    Test t;
    return 0;
}
