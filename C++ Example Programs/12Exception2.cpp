//If an exception is thrown and not caught anywhere, the program terminates abnormally. 
#include <iostream>
using namespace std;
 
int main()
{
    try  {
       throw 'a';
    }
    
	catch (int x)  {
        cout << "Caught ";
    }
    return 0;
}
