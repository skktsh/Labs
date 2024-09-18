// labs_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Int: " << sizeof(int) << endl;
	cout << "Short Int: " << sizeof(short int) << endl;
	cout << "Long Int: " << sizeof(long int) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Dpuble: " << sizeof(double) << endl;
	cout << "Long Double: " << sizeof(long double) << endl;
	cout << "Char: " << sizeof(char) << endl;
	cout << "Bool: " << sizeof(bool) << endl;


	int number = 10;
	unsigned int intMask = 1 << 31;
	cout << "Int Number: ";

	for (int i = 1; i <= 32; i++)
	{
		putchar(number & intMask ? '1' : '0');
		intMask >>= 1;
		if (i % 8 == 0 || i == 1) {
			cout << " ";
		}
	}
	cout << endl;


	unsigned int floatMask = 1 << 31;
	union {
		float floatNumber = 3.14;
		int placeHolder;
	};
	cout << "Float Number: ";

	for (int j = 1; j <= 32; j++)
	{
		putchar(placeHolder & floatMask ? '1' : '0');
		floatMask >>= 1;
		switch (j) {
		case 1:
			cout << " ";
			break;
		case 9:
			cout << " ";
			break;
		}
	}
	cout << endl;

	unsigned int doubleMask1 = 1 << 31;
	unsigned int doubleMask2 = 1 << 31;
	
	union {
		double doubleNumber = 7.895;
		int doubleArr[2];
	};
	cout << "Double Number: ";

	for (int k = 1; k <= 32; k++) {
		putchar(doubleArr[0] & doubleMask1 ? '1' : '0');
		doubleMask1 >>= 1;
		switch (k) {
		case 1:
			cout << " ";
			break;
		case 12:
			cout << " ";
		}
	}
	for (int z = 1; z <= 32; ++z) {
		putchar(doubleArr[1] & doubleMask2 ? '1' : '0');
		doubleMask2 >>= 1;
	}
}

