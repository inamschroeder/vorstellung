//============================================================================
// Name        : first.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int length(int x, int y){
	return sqrt(x*x + y*y);
}

int dot(int x1, int y1, int x2, int y2){
	return 0;
}

int sum(int n){
	if(n < 0) return 0;
	return n + sum(n-1);
}

int fib(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}


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

	cout << "Length:" << length(2, 2) << endl;

	cout << "Summe:" << sum(13) << endl;

	cout << "Fibonacci: " << fib(6) << endl;

	cout << "Fakultät:" << fac(5) << endl;
	return 0;
}
