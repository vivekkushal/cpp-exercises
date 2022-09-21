#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	// First line integer 't' is the number of test cases
	cin >> t;

	if (t >= 0) {
		// Loop for taking test cases
		while (t--) {
			int input;
			cin >> input;

			if (input > 0) {
				for (int i = 1; i <= input; i++) {
					for (int j = 1; j <= i; j++) {
						cout << "*";
					}
					cout << "\n";
				}
			} else {
				cout << "Inputs should be +ve";
			}
		}
	} else {
		cout << "Number of test cases should not be -ve";
	}
}