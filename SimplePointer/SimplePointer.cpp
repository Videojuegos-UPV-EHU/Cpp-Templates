// FunctionTemplates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pointer.h"


int main()
{
	Pointer<int> myInt;
	myInt.Set(3);
	myInt.Print();

	Pointer<double> myDouble;
	myDouble.Set(5.3);
	myDouble.Print();

    return 0;
}

