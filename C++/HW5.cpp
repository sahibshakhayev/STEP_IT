#include <iostream>
int main() {
	using namespace std;

#pragma region Task1
	int mon;
	cout << "Vvedite nomer mesatsa (1-12): ";
	cin >> mon;
	enum mesats
	{
       Yanvar = 1,
	   Fevral,
	   Mart,
	   Aprel,
	   May,
	   Iyun,
	   Iyul,
	   Avqust,
	   Sentyabr,
	   Oktyabr,
	   Noyabr,
	   Dekabr

	};

	switch (mon)
	{
	case Yanvar:
		cout << "31" << endl;
		break;
	case Fevral:
		cout << "29" << endl;
		break;
	case Mart:
		cout << "31" << endl;
		break;
	case Aprel:
		cout << "30" << endl;
		break;
	case May:
		cout << "31" << endl;
		break;
	case Iyun:
		cout << "30" << endl;
		break;
	case Iyul:
		cout << "31" << endl;
		break;
	case Avqust:
		cout << "31" << endl;
		break;
	case Sentyabr:
		cout << "30" << endl;
		break;
	case Oktyabr:
		cout << "31" << endl;
		break;
	case Noyabr:
		cout << "30" << endl;
		break;
	case Dekabr:
		cout << "31" << endl;
		break;
	default:
		cout << "Incorrect Input" << endl;
		break;
	}


#pragma endregion

#pragma region 2

	int before, rotate;
	cout << "Kuda Smotrit robot? (1-4) (1 - sever, 2 - vostok, 3 - yuq, 4 - zapad ): ";
	cin >> before;
	cout << "Napravleniye povorota (1-4) (1 - nalevo, 2 - nappravo, 3 - nazad, 4 - salto ): ";
	cin >> rotate;

	enum rotation
	{
       Nalevo = 1,
	   Napravo,
	   Nazad,
	   Salto
	};

	if (before == 1) {
		switch (rotate)
		{
		case Nalevo:
			cout << "Zapad" << endl;
			break;
		case Napravo:
			cout << "Vostok" << endl;
			break;
		case Nazad:
			cout << "Yuq" << endl;
			break;
		case Salto:
			cout << "Sever" << endl;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
		}

	}


	else if (before == 2) {
		switch (rotate)
		{
		case Nalevo:
			cout << "Sever" << endl;
			break;
		case Napravo:
			cout << "Yuq" << endl;
			break;
		case Nazad:
			cout << "Zapad" << endl;
			break;
		case Salto:
			cout << "Vostok" << endl;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
		}

	}





	else if (before == 3) {
		switch (rotate)
		{
		case Nalevo:
			cout << "Vostok" << endl;
			break;
		case Napravo:
			cout << "Zapad" << endl;
			break;
		case Nazad:
			cout << "Sever" << endl;
			break;
		case Salto:
			cout << "Yuq" << endl;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
		}

	}

	 else if (before == 4) {
		switch (rotate)
		{
		case Nalevo:
			cout << "Yuq" << endl;
			break;
		case Napravo:
			cout << "Sever" << endl;
			break;
		case Nazad:
			cout << "Vostok" << endl;
			break;
		case Salto:
			cout << "Zapad" << endl;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
		}

	}


	else
	{
		cout << "Incorrect input" << endl;
	}




#pragma endregion



	return 0;
}
