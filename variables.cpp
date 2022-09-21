#include<bits/stdc++.h>
using namespace std;

int main() {

	char c = 'V';
	char c1 = 'Z';
	int i = 18;
	double d = 3.5;
	i = 10.5;
	bool b = true;
	cout << c << " " << i << " " << d << " " << b << endl;

	int a = 6;

	cout << a << a++ << a++ << endl;

	// ASCII integer typecasting
	cout << (int) c << endl;
	cout << c1 - c << endl;

	// Taking input
	int i1;
	double d1;
	char c2;
	cin >> i1 >> d1 >> c2;
	cout << i1 << " " << d1 << " " << c2 << " " << (int)c2 << endl;
}
