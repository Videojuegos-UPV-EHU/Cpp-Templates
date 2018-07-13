#pragma once

#pragma once

#include <iostream>
using namespace std;

template <typename T>
class Array2
{
	T** m_array;
	int m_maxNumObjects;
	int m_numObjects;
public:
	Array2(int maxNumObjects = 100)
	{
		cout << "Array created\n";
		m_array = new T*[maxNumObjects];
		m_maxNumObjects = maxNumObjects;
	}
	~Array2()
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

	T& operator[](int i)
	{
		return *(m_array[i]);
	}

	void AddElement(T* pElement)
	{
		if (m_numObjects >= m_maxNumObjects)
		{
			cout << "Could not add element to array : " << *pElement << "\n";
			cout << "Element destroyed: " << *pElement << "\n";
			delete pElement;
			return;
		}
		m_array[m_numObjects] = pElement;
		m_numObjects++;
	}
};
