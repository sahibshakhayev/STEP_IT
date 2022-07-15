#include <iostream>
#include <time.h>
using namespace std;




#pragma region 1
template <typename T>
void fill_random(int size, T arr[]);
#pragma endregion

#pragma region 2
template <typename T>
void fill_range(int size, T arr[], int start, int end);
#pragma endregion

#pragma region 3
template <typename T>
void show_array(int size, T arr[]);
#pragma endregion

#pragma region 4
template <typename T, typename T1>
int find_element(int size, T arr[], T1 element);

#pragma endregion


int main() {
	
	const int size = 20;
	int array[size]{};
	fill_range(20,array,23,45);
	show_array(20, array);
	cout << find_element(20, array, 25);



}

template <typename T>
void fill_random(int size, T arr[]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		if (sizeof(T) == sizeof(int)) {
			arr[i] = rand() % 100;
		}
		else if (sizeof(T) == sizeof(double)) {
			double d = rand() % 100;
			double c = (rand() % 100) * 0.01;
			arr[i] = d + c;

		}
		
		else if (sizeof(T) == sizeof(char)) {
			char t = rand() % (126 - 33 + 1) + 33;
			arr[i] = t;

		}
	}

}

template <typename T>
void fill_range(int size, T arr[], int start, int end) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		if (sizeof(T) == sizeof(int)) {
			arr[i] = rand() % (end-start+1) + start;
		}
		else if (sizeof(T) == sizeof(double)) {
			double d = rand() % (end - start + 1) + start;
			double c = (rand() % (end - start + 1) + start) * 0.01;
			arr[i] = d + c;

		}

		else if (sizeof(T) == sizeof(char)) {
			char t = rand() % (end - start + 1) + start;
			arr[i] = t;

		}
	}




}

template <typename T>
void show_array(int size, T arr[]) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}

template <typename T, typename T1>
int find_element(int size, T arr[], T1 element) {
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element) {
         
			index = i;
			break;

		 }
	}
	return index;


}