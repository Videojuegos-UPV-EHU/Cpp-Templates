// FunctionTemplates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pointer.h"
//
//class IntPointer
//{
//	int* m_pValue;
//public:
//	IntPointer()
//	{
//		cout << "object of type int created\n";
//		m_pValue = new int;
//	}
//	~IntPointer()
//	{
//		cout << "object of type int destroyed";
//		delete m_pValue;
//	}
//	void Set(int value)
//	{
//		*m_pValue = value;
//	}
//	int Get()
//	{
//		return *m_pValue;
//	}
//	void Print()
//	{
//		cout << *m_pValue << "\n";
//	}
//};


int main()
{
	//int* pMyInt = new int;
	//*pMyInt = 3;
	//cout << *pMyInt << "\n";
	//delete pMyInt;

	//IntPointer myInt;
	//myInt.Set(3);
	//myInt.Print();


	Pointer<int> myInt;
	myInt.Set(3);
	myInt.Print();

	Pointer<double> myDouble;
	myDouble.Set(5.3);
	myDouble.Print();

    return 0;
}

