#include <iostream>
using namespace std;
void copy_reverse(int* arr, int* arr2, int len);
void min_max(int* arr, int len);
void zdviq(int* arr, int len, int direction, int k);

int main()
{
	const int len = 10;
	int arr[len]{ 7,4,3,2,1,10,44,8,99,33 };
	int arr2[len]{};
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	copy_reverse(arr, arr2, len);
	min_max(arr, len);
	int direction, k;
	cout << "Ukajite napravlenie zdviqa (1-nalevo, 2-napravo): ";
	cin >> direction;
	cout << "Naskolko shaqov? : ";
	cin >> k;
	zdviq(arr, len, direction, k);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

}

void copy_reverse(int* arr, int* arr2, int len) {

	for (int i = 0; i < len; i++)
	{
		*(arr2 + i) = *(arr + i);
	}

	for (int i = 0; i < len/2; i++)
	{
		int tmp = *(arr2 + i);
		*(arr2 + i) = *(arr2+len-1-i);
		*(arr2 + len - 1 - i) = tmp;
	}

	for (int i = 0; i < len; i++)
	{
		cout << *(arr2 + i) << " ";
	}
	cout << endl;
}

void min_max(int* arr, int len) {
	int min = *arr;
	int max = *arr;
	for (int i = 0; i < len; i++)
	{
		if (*(arr + i) > max) {

			max = *(arr + i);

		}

		if (*(arr + i) < min) {

			min = *(arr + i);

		}

	}

	cout << "Min: " << min << endl << "Max: " << max << endl;


}

void zdviq(int* arr, int len, int direction, int k) {
	if (direction == 1)
	{

		while (k > 0) {
			int temp = *arr;
			for (int i = 0; i < len; i++)
				*(arr+i) = *(arr + i+1);
			*(arr + len-1) = temp;
			k--;
		}

	}
	else if (direction == 2)
	{
		while (k > 0) {
			int temp = *(arr+len-1);
			for (int i = len - 1; i >= 0; i--)
			{
				*(arr+i) = *(arr+i-1);
			}
			*arr = temp;
			k--;
		}
	}
	else {
   
		cout << "Error!" << endl;

	}




}


