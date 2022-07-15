#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
char* login_arr = new char[10]{};
char*  password = new char[8]{};
void menu();
void registration(char* login, char* password);
void login(char* login, char* password);

int main() {
	menu();


	return 0;
}

void menu() {
	system("cls");
	int variant{};
	
	cout << "Choice variant: " << endl;
	cout << "=======================================" << endl;
	cout << "1) Registration" << endl;
	cout << "2) Login" << endl;
	cin >> variant;
	if (variant == 1) {
		registration(login_arr, password);
    }
	 else if (variant == 2) {
		login(login_arr, password);
	}

	 else {
		cout << "Incorrect choice!" << endl;

	}

}



void registration(char* login, char* password) {
	srand(time(NULL));
	char name[20];
	char surname[20];
	int year;
	system("cls");
	cout << "Name: ";
	cin >> name;
	cout << "Surname: ";
	cin >> surname;
	cout << "Brithyear: ";
	cin >> year;
	_strlwr_s(name,20);
	strncpy_s(login_arr, 50,name , 3);
	strncat_s(login_arr, 50, "_", 1);
	_strupr_s(surname, 20);
	strncat_s(login_arr, 50, surname, 3);
	strncat_s(login_arr, 50, "_", 1);
	year = 2022 - year;
	char y_arr[20];
	_itoa_s(year,y_arr, 20, 10);
	strncat_s(login_arr, 50,y_arr , 2);
	for (int i = 0; i < 8; i++)
	{
		password[i] = rand() % (122 - 48 + 1) + 48;
	}
	password[8] = '\0';
	cout << "Login: " << login_arr << endl;
	cout << "Password: " << password << endl;
	cout << "======================================" << endl;
	cout << "Press any key to return to menu...";
	_getch();
	menu();


}

void login(char* login, char* password) {
	system("cls");
	char u_login[20]{};
	char* u_password = new char[8]{};
	cout << "Enter login: ";
	cin >> u_login;
	cout << "Enter password: ";
	int key;
	int i = 0;
	while (true)
	{

		key = _getch();
		_putch('*');
		if (key == 13) {
			break;
		}

		else {

			u_password[i] = key;

			i++;
		}
	}
		
	
	u_password[8] = '\0';

	if (strcmp(login, u_login) == 0 && strcmp(password, u_password) == 0) {
		cout << endl;
		cout << "Login Successed!" << endl;
	}
	
	else {

		cout << "Incorrect Login or Password!" << endl;

	}

	
	




}
