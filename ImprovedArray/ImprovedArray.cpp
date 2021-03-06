// ImprovedArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Array2.h"

// The current implementation of Array<> does not accept new elements once the allocated array is full
// Adapt it so that it resizes the array to accept any number of elements:
//		If Array_Is_Full
//			allocate a buffer with (for example) twice the number of elements
//			copy all the objects we had in the old buffer
//			add the new object
//			free the old buffer
//		Else
//			add the new object

//Check that the size of the array is the correct one at the end of the program

int main()
{
	Array2<int> myArray(4);

	myArray.AddElement(new int(1));
	myArray.AddElement(new int(2));
	myArray.AddElement(new int(3));
	myArray.AddElement(new int(4));
	myArray.AddElement(new int(5));

	cout << "Printing array: " << myArray.Size() << " elements (max=  " << myArray.Capacity() <<")\n";
	for (int i = 0; i < myArray.Size(); i++)
	{
		cout << myArray[i] << "\n";
	}
	cout << "--------------------------------------------\n";


    return 0;
}

