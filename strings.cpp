#include<bits/stdc++.h>
using namespace std;

int main() {
	string str = "Hello";
	string str2;
	// cin takes input till it encounters first line break '\n' or space
	cin >> str2;
	cout << str << " " << str2 << "\n";

	// we can do indexing in 'string'
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << "\n";
	}

	// reassigning string using index and character
	str[0] = 'A';
	cout << str << "\n";

	// getline() is better cin - but it will not ignore "\n" and spaces before taking input, we have to manually ignore them if getline() is used just after cin, we don't have to use cin.ignore() if getline() is not used after cin
	string str3;
	cin.ignore();
	getline(cin, str3);
	cout << str3 << "\n";

	// Program for string reversal
	string str4;
	getline(cin, str4);
	string str4_rev;
	for (int i = str4.size() - 1; i >= 0; i--) {
		str4_rev.push_back(str4[i]);
	}
	cout << str4_rev << "\n";

	// Program for palindrome string
	string str5, str5_rev;
	cin >> str5;
	for (int i = str5.size() - 1; i >= 0; i--) {
		str5_rev.push_back(str5[i]);
	}
	if (str5_rev == str5) {
		cout << "true";
	} else {
		cout << "false";
	}
}