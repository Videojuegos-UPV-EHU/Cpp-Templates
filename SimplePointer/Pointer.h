#pragma once

#include <iostream>
using namespace std;

template <typename ObjectClass>
class Pointer
{
	ObjectClass* m_pObject;
public:

	Pointer()
	{
		m_pObject = new ObjectClass();
	}
	~Pointer()
	{
		cout << "Object destroyed\n";
		delete m_pObject;
	}
	void Set(ObjectClass value)
	{
		*m_pObject = value;
	}
	void Print()
	{
		cout << *m_pObject << "\n";
	}
};
