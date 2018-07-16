// Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{
	Vector3D x(1.0, 2.0, 3.0);
	Vector3D y(4.0, 5.0, 6.0);
	Vector3D z;

	z = x + y;
	cout << "x+y= ";
	z.Print();
	
	z = x - y;
	cout << "x-y= ";
	z.Print();

	z = x * y;
	cout << "z*y= ";
	z.Print();

    return 0;
}

