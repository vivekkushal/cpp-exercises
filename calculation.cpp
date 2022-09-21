#include<bits/stdc++.h>
using namespace std;

int main() {
	// Datatype precedence --->
	// Double
	// Float
	// Long Long Int
	// Long Int
	// Int
	// Char

 

	// Calculation in RHS happens
	// higher datatype

	// Output = 1
	int a = 3 / 2;
	cout << a << endl;

	// Output = 1
	int b = 3 / 2.0;
	cout << b << endl;

	// Output = 1.5
	double c = 3 / 2.0;
	cout << c << endl;

	// Output = 1
	double d = 3 / 2;
	cout << d << endl;
}
