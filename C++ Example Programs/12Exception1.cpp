#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, d, r;
	cout <<"Enter the Numerator:";
	cin>>n;
	cout<<"Enter the denominator:";
	cin>>d;
	try {
		if(d == 0) {
			throw d;
		}
		r = n/d;
		cout<<"\nThe result of division is:" <<r;
	}
	catch(int num) {
		cout<<"You cannot enter "<<num<<" in denominator.";
	}
}
