#include <iostream>
using namespace std;
int bigger(int* a, int* b);
void znak(int* number);
double calculator(int* num1, int* num2, char* operation);

int main()
{
	int a = 120, b = -2;
	cout << bigger(&a, &b) << endl;
	znak(&b);
	char operation = '/';
	cout << calculator(&a, &b, &operation) << endl;
}


int bigger(int* a, int* b) {
	if (*a > *b)
	{
		return *a;
	}

	else {
    
		return *b;
     }


}

void znak(int* number) {
	if (*number >=0)
	{
		cout << "Polojitelni!" << endl;
	}

	else {

		cout << "Otritsatelni!" << endl;
	}


}

double calculator(int* num1, int* num2, char* operation) {

	if (*operation == '+')
	{
		return *num1 + *num2;
	}

	else if (*operation == '-')
	{
		return *num1 - *num2;
	}
	
	else if (*operation == '*')
	{
		return (*num1) * (*num2);
	}

	else if (*operation == '/' && *num2 != 0)
	{
		return (*num1) / (*num2);
	}

	else {

		cout << "Error!";
		return 0;
	}




}
