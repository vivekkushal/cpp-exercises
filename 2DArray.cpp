// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// int a[10];
// 	// a[11] = 2;
// 	// cout << a[11] << "\n";



// }

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	// First line integer 't' is the number of test cases
	cin >> t;

	if (t >= 0) {
		// Loop for taking test cases
		while (t--) {
			// Next line integers 'input' are individual inputs
			int input;
			cin >> input;

			if (input > 0) {
				int a1[input - 1];
				for (int i = 0; i < input - 1; i++) {
					cin >> a1[i];
				}
				int a2[input] = {0};

				int up = 0;
				int down = 0;

				for (int i = input - 2; i >= 0; i--) {
					if (a1[i] == 1) {
						a2[i] = a2[i + 1] - 1;
						down--;
					} else if (a1[i] == 2) {
						a2[i] = a2[i + 1] + 1;
						up++;
					} else {
						a2[i] = a2[i + 1];
					}
				}

				int diff;
				if (-down >= up) {
					diff = -down - up;
				} else {
					diff = down + up;
				}

				for (int i = 0; i < input; i++) {
					a2[i] += diff + 1; //
					cout << a2[i];
					if (i != input - 1) {
						cout << " ";
					} else if (i == input - 1) {
						cout << "\n";
					}
				}
			} else {
				cout << "Inputs should be +ve";
			}
		}
	} else {
		cout << "Number of test cases should not be -ve";
	}
}