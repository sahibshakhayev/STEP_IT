#include <iostream>
int main() {
	using namespace std;

#pragma region Task1
	int num6,d1,d2,d3,d4,d5,d6;
	cin >> num6;
	d1 = num6 / 100000;
	d2 = (num6 /10000) % 10;
	d3 = (num6 /1000) % 10;
	d4 = (num6 /100) % 10;
	d5 = (num6 / 10) % 10;
	d6 = num6 % 10;
	if (d1 != 0 && (num6 - 100000) <= 99999) {

		if (d1 + d2 + d3 == d4 + d5 + d6) {
			cout << "Yes" << endl;
		}
		else {
           
			cout << "No" << endl;
             
		}


	}

	else
	{
		cout << "Error" << endl;
	}


#pragma endregion
#pragma region Task2
	int num4;
	cin >> num4;
	d1 = num4 / 1000;
	d2 = (num4 / 100) % 10;
	d3 = (num4 / 10) % 10;
	d4 = num4  % 10;
	if (d1 != 0 && (num4 - 1000) <= 999) {

		int res = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
		
		cout << res << endl;

	}

	else
	{
		cout << "Error" << endl;
	}
 
#pragma endregion

#pragma region 3


	int numb1, numb2, numb3, numb4, numb5, numb6, numb7;
	cin >> numb1 >> numb2 >> numb3 >> numb4 >> numb5 >> numb6 >> numb7;
	
	if (numb1 >= numb2 && numb1 >= numb3 && numb1 >= numb4 && numb1 >= numb5 && numb1 >= numb6 && numb1 >= numb7) {

		cout << numb1 << endl;

	}
	else if (numb2 >= numb1 && numb2 >= numb3 && numb2 >= numb4 && numb2 >= numb5 && numb2 >= numb6 && numb2 >= numb7) {

		cout << numb2 << endl;

	}
	else if (numb3 >= numb1 && numb3 >= numb2 && numb3 >= numb4 && numb3 >= numb5 && numb3 >= numb6 && numb3 >= numb7) {

		cout << numb3 << endl;

	}

	else if (numb4 >= numb1 && numb4 >= numb2 && numb4 >= numb3 && numb4 >= numb5 && numb4 >= numb6 && numb4 >= numb7) {

		cout << numb4 << endl;

	}

	else if (numb5 >= numb1 && numb5 >= numb2 && numb5 >= numb4 && numb5 >= numb3 && numb5 >= numb6 && numb5 >= numb7) {

		cout << numb5 << endl;

	}
	else if (numb6 >= numb1 && numb6 >= numb2 && numb6 >= numb4 && numb6 >= numb5 && numb6 >= numb3 && numb6 >= numb7) {

		cout << numb6 << endl;

	}
	else {

		cout << numb7 << endl;

	}

#pragma endregion



#pragma region 4
	
	float ab;
	float bc;
	float kg;
	float ab_litr;
	float bc_litr;

	cin >> ab >> bc >> kg;

	if (kg <= 2000) {
      
		if (kg <= 500) {


			ab_litr = 300 - ab;
			bc_litr = ab_litr - bc;

		}
        
		if (kg <= 1000) {


			ab_litr = 300 - 4 * ab;
			bc_litr = ab_litr - 4 * bc;

		}

		if (kg <= 1500) {


			ab_litr = 300 - 7 * ab;
			bc_litr = ab_litr - 7 * bc;

		}

		else {

			ab_litr = 300 - 9 * ab;
			bc_litr = ab_litr - 9 * bc;

		}


		if (ab_litr < 0) {

			cout << "The plane will not even fly on the A-B route" << endl;

		}

		else {

			if (bc_litr >= 0) {

				cout << "The plane will fly along route A - C. Refueling not required" << endl;


		  }

			else if (bc_litr < 0 && bc_litr >= -300) {

				cout << "Refueling required: " << -bc_litr << " litr" << endl;

			}

			else {

				cout << "The plane will not fly on the route B-C" << endl;

			}


		}









	}

	else {

		cout << "Package very heavy!" << endl;

	}













#pragma endregion









	return 0;
}
