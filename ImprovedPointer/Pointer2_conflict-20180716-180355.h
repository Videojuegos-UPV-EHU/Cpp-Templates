#pragma once

#include <iostream>
using namespace std;

template <typename ObjectClass>
class Pointer2
{
	ObjectClass* m_pObject;
	bool m_bDestroy = true;
	static int m_lastId;
	int m_id;
public:

	Pointer2()
	{
		m_lastId++;
		m_id = m_lastId;
		cout << "Object #" << m_id << " created\n";
		m_pObject = new ObjectClass();
	}
	~Pointer2()
	{
		if (m_bDestroy)
		{
			cout << "Object #" << m_id << " destroyed\n";
			delete m_pObject;
		}
		else
		{
			cout << "Destructor called by Object #" << m_id << " was NOT destroyed\n";
		}
	}
	Pointer2& operator=(Pointer2& src)
	{
		cout << "Pointer copied\n";
		delete m_pObject;
		cout << "Object #" << m_id << " destroyed\n";

		m_pObject = src.m_pObject;
		m_id = src.m_id;
		src.m_bDestroy = false;
		return *this;
	}
	void Set(ObjectClass value)
	{
		*m_pObject = value;
	}
	ObjectClass Get()
	{
		return *m_pObject;
	}
	void Print()
	{
		cout << *m_pObject << "\n";
	}
};

template <typename ObjectClass>
int Pointer2<ObjectClass>::m_lastId= 0;