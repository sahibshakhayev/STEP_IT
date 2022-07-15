#include <iostream>
#include <time.h>
using namespace std;




#pragma region 1
void fill_random(int size, int arr[]);
void fill_random(int size, double arr[]);
void fill_random(int size, char arr[]);
void fill_random(int size, bool arr[]);
#pragma endregion

#pragma region 2
void fill_range(int size, int arr[], int start, int end);
void fill_range(int size, double arr[], int start, int end);
void fill_range(int size, char arr[], int start, int end);
#pragma endregion

#pragma region 3
void show_array(int size, int arr[]);
void show_array(int size, double arr[]);
void show_array(int size, char arr[]);
void show_array(int size, bool arr[]);
#pragma endregion

#pragma region 4
int find_element(int size, int arr[], int element);
int find_element(int size, double arr[], double element);
int find_element(int size, char arr[], char element);
int find_element(int size, bool arr[], bool element);
#pragma endregion


int main() {
	
	const int size = 20;
	int array[size]{};
	fill_range(20,array,2,45);
	show_array(20, array);
	cout << find_element(20, array, 25);



}


void fill_random(int size, int arr[]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		
			arr[i] = rand() % 100;
		
		
	}

}
void fill_random(int size, double arr[]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
double d = rand() % 100;
double c = (rand() % 100) * 0.01;
arr[i] = d + c;
	}

}
void fill_random(int size, char arr[]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		char a = rand() % (126 - 33 + 1) + 33;
		arr[i] = a;
	}

}
void fill_random(int size, bool arr[]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 1;
	}

}


void fill_range(int size, int arr[], int start, int end) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		
			arr[i] = rand() % (end-start+1) + start;
		
	}

}
void fill_range(int size, double arr[], int start, int end) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
double d = rand() % (end - start + 1) + start;
double c = (rand() % (end - start + 1) + start) * 0.01;
arr[i] = d + c;
	}

}
void fill_range(int size, char arr[], int start, int end) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{

		char a = rand() % (end - start + 1) + start;
		arr[i] = a;
	}

}





void show_array(int size, int arr[]) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
void show_array(int size, double arr[]) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
void show_array(int size, char arr[]) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
void show_array(int size, bool arr[]) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}


int find_element(int size, int arr[], int element) {
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
int find_element(int size, double arr[], double element) {
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
int find_element(int size, char arr[], char element) {
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
int find_element(int size, bool arr[], bool element) {
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