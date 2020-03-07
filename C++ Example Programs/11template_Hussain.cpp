#include <iostream>
using namespace std;
//template <typename F>    it is not needed
template <class T, class U, class V>   //third type added to use as return type of functions
class Calc{
    T x;
    U y;
    public:
        V Mul(T x, U y)
        {
            return(x*y);}
        V Sum(T x,U y )
        {
            return (x+y);}
        V Diff(T x, U y)
        {
            return (x-y); }
        V Div (T x, U y)
        {
            if(y==0) return cout <<" Undefined "<< endl;
            else    return (x/y) ;}
};
int main()
{
    Calc <int,float,float>obj1; //you need to create objects 
								//of template class in this way
								//you missed to define the types T U V 
    cout << obj1.Mul(5,5.0)<<endl;
    return 0;
}
