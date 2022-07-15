#pragma once
struct Double
{
	int chislitel{ 0 };
	int znamenatel{ 1 };


	void set_data(int chislitel, int znamenatel);
	void add(int chislitel, int znamenatel);
	void dif(int chislitel, int znamenatel);
	void mul(int chislitel, int znamenatel);
	void div(int chislitel, int znamenatel);
};