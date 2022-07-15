#include <iostream>
using namespace std;
int main() {

#pragma region 1
	int type;
	int size;
	char sym;
	int i = 1;
	cout << "Enter line type (1 - horizontal, 2 - vertical): ";
	cin >> type;
	cout << "Enter symbol and size: ";
	cin >> sym >> size;
	if (type == 1) {

		while (i <= size) {

			cout << sym;
			i++;


		}


	}
	else if (type == 2) {

		while (i <= size) {

			cout << sym << endl;
			i++;


		}



	}

	else {

		cout << "Error!" << endl;
	}


	cout << "\n";


#pragma endregion

#pragma region 2
	int start, ending, result;
	result = 0;
	cin >> start >> ending;
	
	while (start <= ending) {
		if (start % 2 != 0) {
			result = result + start;
		}
		start++;
	}
	cout << result << endl;



#pragma endregion

#pragma region 3

	int n;
	result = 1;
	start = 1;
	cin >> n;
	if (n >= 0) {
		if (n == 0) {
      
			result = 1;
			


	  }
		else {

			while (start <= n) {
           
				result = result * start;
				start++;



		 }





		}
     

		cout << result << endl;


	}
	else
	{
		cout << "Error!" << endl;
	}





#pragma endregion

#pragma region 4
	int L, P;
	cin >> L >> P;
	int count = 0;
	while (L > 0) {

		L = L - P;
		count++;

	}
	cout << count << endl;





#pragma endregion


#pragma region 5
	int N;
	cin >> N;
	int zabrali;
	count = 0;
	if (N >= 0) {

		do
		{
			cout << "Skolko yashikov zabrali v etot raz?: ";
			cin >> zabrali;
			N = N - zabrali;
			count++;







		} while (N > 0);


		cout << count << endl;

	}
	else
	{
		cout << "Error!" << endl;
	}



#pragma endregion



}
