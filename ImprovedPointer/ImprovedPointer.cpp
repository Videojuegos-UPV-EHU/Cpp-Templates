// ClassTemplates.ImprovedPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../SimplePointer/Pointer.h"
#include "Pointer2.h"


int main()
{
	Pointer<int> a;
	a.Set(54);
	Pointer<int> b;
	b = a;

    return 0;
}

