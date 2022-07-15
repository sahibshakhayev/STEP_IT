#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));

#pragma region 1
	int start_e{};
	cin >> start_e;
	int tmp = start_e;
	int arr[2][5]{};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			arr[i][j] = tmp;
			tmp *= 2;

		}


	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			cout << arr[i][j] << "\t";

		}

		cout << endl;
	}
#pragma endregion	

#pragma region 2
	int start_e2{};
	cin >> start_e2;
	int tmp2 = start_e2;
	int arr2[2][5]{};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			arr2[i][j] = tmp2;
			tmp2 += 1;

		}


	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			cout << arr2[i][j] << "\t";

		}

		cout << endl;
	}



#pragma endregion
	cout << "\n\n";
#pragma region 3
	int arr3[3][5]{};
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 5; j++)
		{

			arr3[i][j] = rand() % 33 - 10;


		}

	}

	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 5; j++)
		{

			cout << arr3[i][j] << "\t";


		}
		cout << "\n";
	}

	int s, l, nmin, mmin, buf_a;
	cout << "\n" << "Vvedite kolichectvo zdviqa i napravleniye (1 - levo, 2 - pravo, 3- verx, 4 - vniz: ";
	cin >> s >> l;
	if (l == 1)
	{
		for (int k = 0; k < s; k++) {
			for (int j = 4; j > 0; j--)
			{
				mmin = 0;
				for (int i = 0; i < 3; i++)
				{
					buf_a = arr3[i][j];
					arr3[i][j] = arr3[i][mmin];
					arr3[i][mmin] = buf_a;



				}
			}

		}

		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 5; j++)
			{

				cout << arr3[i][j] << "\t";


			}
			cout << "\n";
		}

	}
	else if (l == 2)
	{
		for (int k = 0; k < s; k++) {
			for (int j = 4; j > 0; j--)
			{
				mmin = j - 1;
				for (int i = 0; i < 3; i++)
				{
					buf_a = arr3[i][j];
					arr3[i][j] = arr3[i][mmin];
					arr3[i][mmin] = buf_a;



				}
			}

		}
     
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 5; j++)
			{

				cout << arr3[i][j] << "\t";


			}
			cout << "\n";
		}

	}
	else if (l == 3)
	{
		for (int k = 0; k < s; k++) {
			for (int i = 2; i > 0; i--)
			{
				nmin = 0;
				for (int j = 0; j < 4; j++)
				{
					buf_a = arr3[i][j];
					arr3[i][j] = arr3[nmin][j];
					arr3[nmin][j] = buf_a;



				}
			}

		}

		for (int i = 0; i < 2; i++)
		{

			for (int j = 0; j < 5; j++)
			{

				cout << arr3[i][j] << "\t";


			}
			cout << "\n";
		}

	}
	else if (l == 4)
	{
		for (int k = 0; k < s; k++) {
			for (int i = 2; i > 0; i--)
			{
				nmin = i - 1;
				for (int j = 0; j < 4; j++)
				{
					buf_a = arr3[i][j];
					arr3[i][j] = arr3[nmin][j];
					arr3[nmin][j] = buf_a;



				}
			}

		}

		for (int i = 0; i < 2; i++)
		{

			for (int j = 0; j < 5; j++)
			{

				cout << arr3[i][j] << "\t";


			}
			cout << "\n";
		}

	}
	else
	{
	cout << "Error!" << endl;

	}


	
#pragma endregion



}