#include <iostream>

using namespace std;

void premoqolnik(int n, int k) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (i == 0 || j == 0 || i== n-1 || j== k-1) {
              
				cout << "*" << " ";

		   }
			else {

				cout << "  ";

			}
		}

		cout << endl;

	}



}

int faktorial(int num) {
	int factorial{1};
	
	for (int i = num ; i > 0; i--)
	{
		factorial *= i;
	}

	return factorial;

}

bool prostoye_chislo(int number)
{
	if (number > 1)
	{
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				return false;
			}
		}

	  return true;
	}
	else {
		return false;
	}
}

int naibolseye(int a, int b) {
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}

}

bool polojitelno(int number) {
	if (number >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}



int main() {
	
	premoqolnik(15, 30);
	cout << endl;
	cout << faktorial(6);
	cout << endl;
	cout << prostoye_chislo(11) << endl;
	cout << naibolseye(11,50) << endl;
	cout << polojitelno(25) << endl;


}