// C++ program for function overriding
 
#include <bits/stdc++.h>
using namespace std;
 

class Parent														// Base class
{
    public:
    void print()
    {
        cout << "The Parent print function was called" << endl;
    }
};
 

class Child : public Parent										// Derived class
{
    public:
     
    
    /*void print()												// definition of a member function already present in Parent
    {
        cout << "The child print function was called" << endl;
    }*/
     
};
 
int main() 
{
    
    Parent obj1;												//object of parent class
    Child obj2 = Child();										//object of child class
     
     
    
    obj1.print();												// obj1 will call the print function in Parent
    obj2.print();				// obj2 will override the print function in Parent and call the print function in Child
    return 0;
} 
