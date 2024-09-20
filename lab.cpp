// lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Int: " << sizeof(int) << " byte" << endl;
	cout << "Short Int: " << sizeof(short int) << " byte" << endl;
	cout << "Long Int: " << sizeof(long int) << " byte" << endl;
	cout << "Float: " << sizeof(float) << " byte" << endl;
	cout << "Dpuble: " << sizeof(double) << " byte" << endl;
	cout << "Long Double: " << sizeof(long double) << " byte" << endl;
	cout << "Char: " << sizeof(char) << " byte" << endl;
	cout << "Bool: " << sizeof(bool) << " byte" << endl;


	int intNumber;
	cout << "Enter any integer number: ";
	cin >> intNumber;
	unsigned int intMask = 1 << (sizeof(int) * 8 - 1);

	for (int i = 1; i <= sizeof(int) * 8; i++)
	{
		putchar(intNumber & intMask ? '1' : '0');
		intMask >>= 1;
		if (i % 8 == 0 || i == 1) {
			cout << " ";
		}
	}
	cout << endl;

	cout << "Enter any float number: ";
	unsigned int floatMask = 1 << (sizeof(int) * 8 - 1);
	union {
		float floatNumber;
		int placeHolder;
	};
	cin >> floatNumber;

	for (int j = 1; j <= sizeof(float) * 8; j++)
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

	cout << "Enter any fractional number: ";
	unsigned int doubleMask = 1 << (sizeof(int) * 8 - 1);
	union {
		double doubleNumber;
		int arr[2];
	};
	cin >> doubleNumber;

	for (int z = 1; z >= 0 ; --z)
	{
		for (int k = 1; k <= sizeof(int) * 8; k++) {
			putchar(arr[z] & doubleMask ? '1' : '0');
			doubleMask >>= 1;
			if ( z == 1 & (k == 1 || k == 12)) {
				cout << " ";
			}
		}
		doubleMask = 1 << (sizeof(int) * 8 - 1);
	}
}