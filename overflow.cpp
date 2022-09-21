#include<bits/stdc++.h>
using namespace std;

int main() {
 

	int a = 100000;
	int b = 100000;
	// Below line will overflow
	int c = a * b;

	cout << c << "\n";

	int max = INT_MAX;
	cout << max << "\n";
	// Below line will overflow
	cout << max + 1 << "\n";

	long int a1 = 100000;
	long int b1 = 100000;
	// Below line will NOT overflow
	long int c1 = a1 * b1;

	cout << c1 << "\n";

	int a2 = 100000;
	int b2 = 100000;
	// Below line will NOT overflow
	// Calculation on RHS will happen in long long int
	long int c2 = a2 * 1LL * b2;

	cout << c2 << "\n";
}