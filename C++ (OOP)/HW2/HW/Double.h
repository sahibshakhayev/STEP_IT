#pragma once
class Double
{
public:
	int chislitel{ 0 };
	int znamenatel{ 1 };


	void set_data(int chislitel, int znamenatel);
	void operator + (const Double& other);
    void operator - (const Double& other);
	void operator * (const Double& other);
	void operator / (const Double& other);;
};