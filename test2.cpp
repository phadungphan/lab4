#include <iostream>
#include <cmath>
using namespace std;

double findDistance(double u, double a, double t){
	double s;
	s = u*t + 0.5*a*t*t;
	return s;

}
int main(){
	double u, a, t;
	cout<< "test case 1 = "<< findDistance(0, 0.5, 1)<< endl;
	cout<< "test case 2 = "<< findDistance(1.5, -1, 2)<< endl;
	cout<< "test case 3 = "<< findDistance(5, 4, 3)<< endl;
	
	return 0;
	
}
