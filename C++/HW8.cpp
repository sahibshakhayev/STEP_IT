#include <iostream>
using namespace std;
int main() {

#pragma region 1
	int number{}, zero{}, positive{}, negative{};
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number == 0) {
			zero +=1;

		}
		else if (number > 0)
		{
			positive += 1;
		}
		else
		{
			negative += 1;
		}

	}



	cout << "Positive percent: " << (positive * 100) /10 << "%" << endl;
	cout << "Negative percent: " << (negative * 100)/10 << "%" << endl;
	cout << "Zero percent: " << (zero * 100) /10 << "%" << endl;
#pragma endregion
#pragma region 2
	int even{}, odd{};
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number % 2 == 0) {
		     even += 1;

		}
		
		else
		{
			odd += 1;
		}

	}



	cout << "Even percent: " << (even * 100) / 10 << "%" << endl;
	cout << "Odd percent: " << (odd * 100) / 10 << "%" << endl;
	

	




#pragma endregion


#pragma region 3




	for (int i = 1; i < 11; i++)
	{
		for  (int j = 1; j < 11; j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;

	}

#pragma endregion


#pragma region 4
	cout << "\n";
	bool is_prime;
	int j;
	for (int i = 2; i < 100; i++) {
	is_prime = true;
	for (j = 2; j < i; j++) { 
	if (!(i % j)) 
	{
		
	is_prime = false; 
	break; 
	} 
	
	}
	if (is_prime == true) {


		cout << j << "\t";
	}
	}




#pragma endregion
	cout << "\n\n";
#pragma region 5
	char white = 219;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 != 0) {

					cout << white<<white;

			     }
				else {

					cout << "  ";
				}


			}
		}
		else
		{
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 != 0) {

					cout << "  ";

				}
				else {

					cout << white<< white;
				}


			}
		}
		cout << endl;

	}



#pragma endregion



}
