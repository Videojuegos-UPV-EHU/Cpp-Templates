// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Array.h"

class Vector3D
{
	double m_x, m_y, m_z;
public:
	Vector3D(double x, double y, double z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}
	void Print()
	{
		cout << "[" << m_x << "," << m_y << "," << m_z << "]\n";
	}
};


int main()
{
	Array<Vector3D> myArray;

	cout << "Initial array capacity: " << myArray.Capacity() << "\n";
	cout << "Initial array size: " << myArray.Size() << "\n";

	myArray.AddElement(new Vector3D(1.0, 2.0, 3.0));
	myArray.AddElement(new Vector3D(4.0, 5.0, 6.0));

	cout << "Current array size: " << myArray.Size() << "\n";
	
	for (int i = 0; i < myArray.Size(); i++)
	{
		myArray.Get(i)->Print();
	}
	
    return 0;
}

