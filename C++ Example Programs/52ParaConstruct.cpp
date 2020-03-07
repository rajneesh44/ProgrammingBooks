// CPP program to illustrate
// parameterized constructors
#include<iostream>
using namespace std;
 
class Point
{
    private:
        int x, y;
    public:
        
        Point(int x1, int y1) 			// Parameterized Constructor
        { 
            x = x1; 
            y = y1; 
        }
     	
     	/*Point()
     	{
     		x=0;
     		y=0;
		 }*/
		 
		 
        int getX()       
        { 
            return x; 
        }
        int getY()
        { 
            return y;
        }
    };
 
int main()
{
    
    Point p1(10, 15); 				// Constructor called
    //Point p2;
 
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY()<<endl;
 	//cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY();
    return 0;
}
