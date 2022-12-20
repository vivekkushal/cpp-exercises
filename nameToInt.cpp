#include<bits/stdc++.h>
using namespace std;


int nameToInt(string name) {
	int sum = 0;
	for (int i = 0; i < name.length(); i++) {
		int nameInteger = name[i];
		sum = sum + nameInteger;
	}
	cout << sum << "\n";

	return sum;
}

int main() {
	nameToInt("Vivek is awesome");
}