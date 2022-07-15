#include <iostream>
int main() {
	using namespace std;

#pragma region Task1

	char sym;
	cin >> sym;
	int check = sym;
	if ((check >= 65 && check <= 90) || (check >= 97 && check <= 122)) {

		cout << "Letter" << endl;



	}

	else if (check >= 48 && check <= 57) {

		cout << "Number" << endl;


	}

	else if ((check >= 32 && check <= 47) || (check >= 58 && check <= 64) || (check >= 91 && check <= 96) || (check >= 123 && check <= 126)) {

		cout << "Symbol" << endl;



	}
	else {

		cout << "Other" << endl;

	}










#pragma endregion

#pragma region 2
	int minutes;
	int variant;
	float result;
	cout << "How long you want to talk? (minutes): ";
	cin >> minutes;
	cout << " 1) Azercell - Azercell, Bakcell - Backcell, Nar - Nar (0.03 AZN / min)\n 2) Azercell to Other (0.05 AZN / min)\n 3) Bakcell to Other (0.04 AZN / min)\n 4) Nar to Other (0.05 AZN / min) " << endl;
	cout << " Select variant (1-4): ";
	cin >> variant;
	if (variant == 1) {
     
		result = 0.03 * minutes;
		cout << result << endl;

	}
	else if (variant == 2) {

		result = 0.05 * minutes;
		cout << result << endl;

	}
	 else if (variant == 3) {

		result = 0.04 * minutes;
		cout << result << endl;

	}

	else if (variant == 4) {

		result = 0.05 * minutes;
		cout << result << endl;

	}
	else {

		cout << "Incorrect input" << endl;

	}

	
#pragma endregion

#pragma region 3
	int strok{};
	int oposdaniye{};
	float doxod{};
	variant = 0;
	cout << "Menu: " << endl;
	cout << "1) Input Salary, Late  ? - Lines of Code " << endl;
	cout << "2) Input Lines of Code, Salary   ? - Late  " << endl;
	cout << "3) Input Lines of Code, Late   ? - Salary  " << endl;
	cout << " Select variant (1-3): ";
	cin >> variant;
	if (variant == 1) {

		cin >> doxod >> oposdaniye;
		oposdaniye = oposdaniye * 20;
		doxod = oposdaniye + doxod;
		strok = (100 * doxod) / 50;
		cout << strok << endl;

	}
	else if (variant == 2) {
    
		cin >> strok >> doxod;
		doxod = ((strok * 50) / 100) - doxod;
		oposdaniye = doxod / 20;
		if (oposdaniye < 0) {

			oposdaniye = 0;

		}
		cout << oposdaniye << endl;

	}
	else if (variant == 3) {
		cin >> strok >> oposdaniye;
		oposdaniye = oposdaniye * 20;
		doxod = ((strok * 50) / 100) - oposdaniye;
		if (doxod < 0) {
        
			doxod = 0;

		}
		
		cout << doxod << endl;
	}


#pragma endregion



	return 0;
}
