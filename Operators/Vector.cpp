#include "stdafx.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Vector3D::Vector3D(double x, double y, double z)
{
	m_values[0] = x;
	m_values[1] = y;
	m_values[2] = z;
}

Vector3D::~Vector3D()
{
	cout << "Vector3D destroyed: ";
	Print();
}

Vector3D Vector3D::operator+(const Vector3D& second) const
{
	Vector3D result;
	result.m_values[0] = m_values[0] + second.m_values[0];
	result.m_values[1] = m_values[1] + second.m_values[1];
	result.m_values[2] = m_values[2] + second.m_values[2];
	return result;
}

Vector3D Vector3D::Vector3D::operator-(const Vector3D& second) const
{
	Vector3D result;
	result.m_values[0] = m_values[0] - second.m_values[0];
	result.m_values[1] = m_values[1] - second.m_values[1];
	result.m_values[2] = m_values[2] - second.m_values[2];
	return result;
}

Vector3D Vector3D::operator*(const Vector3D& second) const
{
	Vector3D result;
	result.m_values[0] = m_values[0] * second.m_values[0];
	result.m_values[1] = m_values[1] * second.m_values[1];
	result.m_values[2] = m_values[2] * second.m_values[2];
	return result;
}


double& Vector3D::operator[](int i)
{
	return m_values[i];
}

void Vector3D::Print()
{
	cout << "[" << m_values[0] << "," << m_values[1] << "," << m_values[2] << "]\n";
}