#pragma once

//template <typename DataType>
class Vector3D
{
	double m_values[3];
public:
	Vector3D() {}	//We need a constructor without parameters to create an array of type Vector3D
	Vector3D(double x, double y, double z);
	virtual ~Vector3D();

	//Operators

	Vector3D operator+(const Vector3D& second) const;
	Vector3D operator-(const Vector3D& second) const;
	Vector3D operator*(const Vector3D& second) const;

	double& operator[](int i);

	void Print();
};

