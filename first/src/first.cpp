//============================================================================
// Name        : first.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Vector2D.h"
using namespace std;

void printVector2D(Vector2D v){
	cout << "(" << v.x() << ", " << v.y() << ")";
}

int main() {

	Vector2D a = Vector2D(1.0, 2.0);
	Vector2D b = Vector2D(4.0, 5.0);

	cout << "Length: " << a.length() << endl;

	cout << "Addition: ";
	printVector2D(Vector2D(a + b));
	cout << endl;

	cout << "Subtraktion: ";
	printVector2D(Vector2D(a - b));
	cout << endl;

	cout << "Skalarmulti: ";
	printVector2D(Vector2D(a * 2));
	cout << endl;

	cout << "Skalardiv: ";
	printVector2D(Vector2D(a / 2));
	cout << endl;

	cout << "Dot: ";
	cout << dot(a, b);
	cout << endl;

	cout << "Normalize:";
	printVector2D(normalize(a));
	cout << endl;

	return 0;
}
