#include <iostream>
using namespace std;

int main() {
	int massiv[10]{ 43,1,77,99,0,10, 5,44,6,9 };
	for (int i = 0; i < 10; i++) {
		cout << massiv[i] << " ";
	}
	cout << endl;



/*

	#pragma region BubbleSort Reverse

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (massiv[j] < massiv[j + 1]) {
				int b = massiv[j+1];
				massiv[j+1] = massiv[j];
				massiv[j] = b;
			}
		}
	}
	cout << "Bubble Sort reverse: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << massiv[i] << " ";
	}
	cout << endl;

	#pragma endregion










	#pragma region ShakerSort reverse

	bool swaped = false;
	int ub = 9, lb = 1, pos = 9, tmp{};

	do
	{
		swaped = false;
		for (int i = ub; i > 0; i--)
		{
			if (massiv[i-1] < massiv[i])
			{
				swaped = true;
				tmp = massiv[i];
				massiv[i] = massiv[i-1];
				massiv[i-1] = tmp;
				pos = i;
			}


		}
		lb = pos + 1;
		for  (int i = 1;  i <= ub;  i++)
		{
			if (massiv[i - 1] < massiv[i])
			{
				swaped = true;
				tmp = massiv[i];
				massiv[i] = massiv[i - 1];
				massiv[i - 1] = tmp;
				pos = i;
			}
		}

		ub = pos - 1;
	} while (lb < ub && swaped);

	cout << "Shaker Sort reverse: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << massiv[i] << " ";
	}
	cout << endl;


	


	#pragma endregion















	#pragma region Insert Sort reverse

	int i{}, j{}, element{};
	for (i = 0; i < 10; i++)
	{
		element = massiv[i];
		for ( j = i-1; j >= 0 && massiv[j] < element; j--)
		{
			massiv[j + 1] = massiv[j];
		}

		massiv[j + 1] = element;



	}

	cout << "Insert Sort reverse: " << endl;

	for (int i = 0; i < 10; i++) {
		cout << massiv[i] << " ";
	}
	cout << endl;






	#pragma endregion













#pragma region Selection Sort

int i{}, j{}, min_index{};
for ( i = 0; i < 10; i++)
{
	min_index = i;
	int min = massiv[min_index];
	for  (j = i+1; j < 10; j++)
	{
		if (massiv[j] > min)
		{
			min = massiv[j];
			min_index = j;
		}

	}
	if (min_index !=i)
	{
		massiv[min_index] = massiv[i];
		massiv[i] = min;
	}
}
cout << "Select Sort reverse: " << endl;
for (int i = 0; i < 10; i++) {
	cout << massiv[i] << " ";
}
cout << endl;
#pragma endregion
*/
}