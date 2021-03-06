// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Array.h"
#include "../Operators/Vector.h"


int main()
{
	Array<Vector3D> myArray;

	cout << "Initial array capacity: " << myArray.Capacity() << "\n";
	cout << "Initial array size: " << myArray.Size() << "\n";

	myArray.AddElement(new Vector3D(1.0, 2.0, 3.0));
	myArray.AddElement(new Vector3D(2.0, 5.0, 2.0));
	myArray.AddElement(new Vector3D(0.0, 1.2, 3.0));

	cout << "Current array size: " << myArray.Size() << "\n";
	
	for (int i = 0; i < myArray.Size(); i++)
	{
		myArray.Get(i)->Print();
		//myArray[i].Print();
	}
	
    return 0;
}

