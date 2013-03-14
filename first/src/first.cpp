//============================================================================
// Name        : first.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fib(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	cout << fib(6) << endl; // prints !!!Hello World!!!
	return 0;
}
