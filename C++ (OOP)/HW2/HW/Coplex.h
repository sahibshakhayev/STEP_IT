#pragma once
class Complex
{
public:
	int deys{ 0 };
	int mnima{ 0 };


	void set_data(int deys, int mnima);
	void print();

	void operator + (const Complex& other);
	void operator - (const Complex& other);
	void operator * (const Complex& other);
	void operator / (const Complex& other);
};