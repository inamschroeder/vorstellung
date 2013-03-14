//============================================================================
// Name        : first.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int fac(int n){
if (n < 0){
	return 0;
}
if(n == 0 || n == 1){
	return 1;
}
return n * fac(n-1);
}


int main() {

	int a = fac(5);

	cout << a << endl; // prints !!!Hello World!!!
	return 0;
}
