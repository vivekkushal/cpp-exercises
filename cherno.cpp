#include <iostream>
// Method 1: This way we DON'T need to individually include all function declarations but we will need header file
#include "cherno_function.h"

// Method 2: This way we need to individually include all function declarations but we DON'T need header file
// int Multiply(int a, int b);
// void MultiplyAndLog(int a, int b);


int main() {
	string str = "Hello awesome Vivek";
	cout << str << endl;
	int variable2 = 23;
	int variable = 'A';
	char character = 66;
	std::cout << variable << "\n";
	variable = 20;
	std::cout << variable << "\n";
	std::cout << character << "\n";
	std::cout << variable2 << "\n";


	std::cout << Multiply(6, 3) << "\n";
	MultiplyAndLog(8, 5);
	MultiplyAndLog(9, 9);
}
