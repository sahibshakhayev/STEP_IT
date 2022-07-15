#include <iostream>
int main() {
	using namespace std;

#pragma region Task1
	float len;
	float time;
	float speed;
	cout << "Enter lenght and time ( lenght (KM) time (h) ): ";
	cin >> len >> time;
	speed = len / time;
	cout << "Speed is: " << speed << " KM/h" << endl;
#pragma endregion
#pragma region Task2
	int s_hour;
	int s_minutes;
	int s_seconds;
	int e_hour;
	int e_minutes;
	int e_seconds;
	float result;
	cout << "Enter start time (hour minutes seconds): ";
	cin >> s_hour >> s_minutes >> s_seconds;
	cout << "Enter end time (hour minutes seconds): ";
	cin >> e_hour >> e_minutes >> e_seconds;
	result = ((e_hour * 60 + e_minutes + e_seconds / 60) - (s_hour * 60 + s_minutes + s_seconds / 60)) * 2;
	cout << "Price: " << result << " UAH" << endl;
 
#pragma endregion

#pragma region Task3
	float len;
	float l_to_100;
	float a92_price;
	float a95_price;
	float a98_price;
	
	cin >> len;
	
	cin >> l_to_100;

	cin >> a92_price >> a95_price >> a98_price;
	float a92 = (len / 100 * l_to_100) * a92_price, a95 = (len / 100 * l_to_100) * a95_price, a98 = (len / 100 * l_to_100) * a98_price;

	cout << " ---------------------------------------------------------------------------------------------------------------------" << endl;
	cout << " |               A92                 |                 A95                 |                A98                      |" << endl;
	cout << " ---------------------------------------------------------------------------------------------------------------------" << endl;
	cout << " |              " << a92 << "        |             " << a95 << "           |          " << a98 << "                  |" << endl;
	cout << " _____________________________________________________________________________________________________________________" << endl;


#pragma endregion
#pragma region 4
	float price{};
	cin >> price;
	int part1 = price;
	int part2 = (price - part1) * 10;
	if (part2 <= 9) {
		part2 = part2 * 10;

	}
	cout << part1 << " dollars and " << part2 << " cents" << endl;
#pragma endregion









	return 0;
}
