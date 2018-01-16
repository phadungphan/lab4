#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cout<< "Enter x = ";
	cin>> x;
	y = pow(x,3)*3 + 2*2.71828 + pow(2,2*x+1) + sqrt(pow(x,2)+1);
	cout<< y;
	
	
	return 0;
}
