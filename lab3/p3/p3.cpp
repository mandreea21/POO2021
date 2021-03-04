// p3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math.h"
using namespace std;
int main()
{
	cout << Math::Add(10, 30) << endl;
	cout << Math::Add(10, 30, 20) << endl;
	cout << Math::Add(10.5, 30.5) << endl;
	cout << Math::Add(10.5, 30.5, 12.3) << endl;
	cout << Math::Mul(10, 20) << endl;
	cout << Math::Mul(10.4, 20.2)t << endl;
	cout << Math::Mul(10.4, 30.2, 10.5) << endl;
	cout << Math::Add(10, 40, 20, 80, 23, 56, 5, 1, 2, 6, 5) << endl;
	cout << Math::Add("10", "30");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
