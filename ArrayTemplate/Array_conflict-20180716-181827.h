#pragma once

#include <iostream>
using namespace std;

template <typename T>
class Array
{
	T** m_array;
	int m_maxNumObjects;
	int m_numObjects;
public:
	Array(int maxNumObjects= 100)
	{
		cout << "Array created\n";
		m_array = new T*[maxNumObjects];
		m_maxNumObjects = maxNumObjects;
	}
	~Array()
	{
		cout << "Array destroyed\n";
		for (int i = 0; i < m_numObjects; i++) delete m_array[i];
		delete[] m_array;
	}
	int Size()
	{
		return m_numObjects;
	}
	int Capacity()
	{
		return m_maxNumObjects;
	}

	T* Get(int i)
	{
		if (i >= m_numObjects || i<0) return nullptr;

		return m_array[i];
	}
	//This is a more elegant way to access elements than the alternative above:
	T& operator[](int i)
	{
		return *(m_array[i]);
	}

	void AddElement(T* pElement)
	{
		if (m_numObjects >= m_maxNumObjects)
		{
			delete pElement;
			return;
		}
		m_array[m_numObjects] = pElement;
		m_numObjects++;
	}
};
