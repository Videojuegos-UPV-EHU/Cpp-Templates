#pragma once

#include <iostream>
using namespace std;

template <typename ObjectClass>
class Pointer
{
	ObjectClass* m_pValue;
public:

	Pointer()
	{
		m_pValue = new ObjectClass();
	}
	~Pointer()
	{
		cout << "Object destroyed\n";
		delete m_pValue;
	}
	void Set(ObjectClass value)
	{
		*m_pValue = value;
	}
	void Print()
	{
		cout << *m_pValue << "\n";
	}
};
