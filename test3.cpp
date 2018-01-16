#include <iostream>
#include <cmath>
using namespace std;

int findDivisor (int x){
	int y = 2;	
	while(x%y != 0){
		y++; 
	}
	return y;
}
int main(){
	int x;
	cout<< "test case 1 = "<< findDivisor (10) << "\n";
	cout<< "test case 2 = "<< findDivisor (97) << "\n";
	cout<< "test case 3 = "<< findDivisor (221) << "\n";
}

