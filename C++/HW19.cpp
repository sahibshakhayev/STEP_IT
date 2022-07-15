#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
struct Film
{
	char name[50];
	char director[50];
	char genre[50];
	double rating;
	double price;

};

void show(Film* arr, int len);
void add_film(Film* arr, int& len);
void menu(Film* films, int& film_len);
void search(Film* arr, int& len);

int main() {
	system("cls");
	 int film_len = 5;
	Film* films = new Film[film_len]{

		{"Belfast" , "Kenneth Branagh", "Drama, History", 7.3 , 15.4},
		{"The Ray" , "Christopher Borrelli", "Action, Thriller", 5.2 , 6.4},
		{"Coming 2 America" , "Craig Brewer", "Comedy", 5.3 , 10.4},
		{"The Matrix Resurrections" , "Lana Wachowski", "Action, Sci-Fi", 7.3 , 13.8},
		{"Redeeming Love" , "D.J. Caruso", "Drama, History, Romance", 6.5 , 9.5},
	};
	menu(films, film_len);
}


void menu(Film* films, int& film_len) {
	system("cls");
	cout << "Select Operation: " << endl;
	cout << "1) List Films" << endl;
	cout << "2) Add Film" << endl;
	cout << "3) Search Film" << endl;
	int variant;
	cout << "Select variant: ";

	cin >> variant;
	if (variant == 1)
	{
		show(films, film_len);
	}
	 else if (variant == 2)
	{
		add_film(films, film_len);
	}
	 else if (variant == 3)
	{
		search(films, film_len);
	}
}





void show(Film* arr, int len) {
	system("cls");
	for (int i = 0; i < len; i++)
	{
		cout << i+1 << ") " << " " << arr[i].name << " - " << arr[i].director << " - " << arr[i].genre << " - " << arr[i].rating << " - " << arr[i].price << " AZN" << endl;
	}
	cout << "\n";


	cout << "Press any key to return main menu ...";
	_getch();
	menu(arr, len);
}
 void add_film(Film* arr, int& len) {
	system("cls");
	char name[50];
	char director[50];
	char genre[50];
	double rating;
	double price;
	cout << "Enter film name: ";
	getchar();
	gets_s(name, 50);
	cout << "Enter director: ";
	gets_s(director, 50);
	cout << "Enter film genres: ";
	gets_s(genre, 50);
	cout << "Enter film rating: ";
	cin >> rating;
	cout << "Enter film price: ";
	cin >> price;

	Film* tmp = new Film[len + 1];

	for (int i = 0; i < len; i++)
	{
		strcpy_s(tmp[i].name, arr[i].name);
		strcpy_s(tmp[i].director, arr[i].director);
		strcpy_s(tmp[i].genre, arr[i].genre);
		tmp[i].rating = arr[i].rating;
		tmp[i].price = arr[i].price;

	}
	delete[] arr;

	strcpy_s(tmp[len].name, name);
	strcpy_s(tmp[len].director, director);
	strcpy_s(tmp[len].genre, genre);
	tmp[len].rating = rating;
	tmp[len].price =price;
	arr = tmp;
	
	len++;
	cout << "\n Film added successfuly!" << endl;


	cout << "Press any key to return main menu ...";
	_getch();
	menu(arr, len);


}
 void search(Film* arr, int& len) {
	 
	 system("cls");
	 cout << "Select Operation: " << endl;
	 cout << "1) Search by Name" << endl;
	 cout << "2) Search by Genre" << endl;
	 cout << "3) Search by Director" << endl;
	 cout << "4) Most popular film in genre" << endl;
	 int variant;
	 cout << "Select variant: ";

	 cin >> variant;
	 if (variant == 1 )
	 {
		 char u_input[50];
		 cout << "Enter Film name for search: ";
		 
		 
		 getchar();
		 gets_s(u_input, 50);
		 for (int i = 0; i < len; i++)
		 {
			 if (strstr(arr[i].name, u_input))
			 {
               cout << i + 1 << ") " << " " << arr[i].name << " - " << arr[i].director << " - " << arr[i].genre << " - " << arr[i].rating << " - " << arr[i].price << " AZN" << endl;
			 }
		}
	 }
	  else if (variant == 2)
	 {
		 char u_input[50];
		 cout << "Enter Film genre for search: ";


		 getchar();
		 gets_s(u_input, 50);
		 for (int i = 0; i < len; i++)
		 {
			 if (strstr(arr[i].genre, u_input))
			 {
				 cout << i + 1 << ") " << " " << arr[i].name << " - " << arr[i].director << " - " << arr[i].genre << " - " << arr[i].rating << " - " << arr[i].price << " AZN" << endl;
			 }
		 }
	 }
	 else if (variant == 3)
	 {
		 char u_input[50];
		 cout << "Enter Film director for search: ";


		 getchar();
		 gets_s(u_input, 50);
		 for (int i = 0; i < len; i++)
		 {
			 if (strstr(arr[i].director, u_input))
			 {
				 cout << i + 1 << ") " << " " << arr[i].name << " - " << arr[i].director << " - " << arr[i].genre << " - " << arr[i].rating << " - " << arr[i].price << " AZN" << endl;
			 }
		 }
	 }
	  else if (variant == 4)
	 {
		 char u_input[50];
		 cout << "Enter Film genre for info: ";
		 int max = 0;

		 getchar();
		 gets_s(u_input, 50);
		 for (int i = 0; i < len; i++)
		 {
			 if (strstr(arr[i].genre, u_input))
			 {
				 if (arr[i].rating > arr[max].rating)
				 {
					 max = i;
				 }
				 cout << max + 1 << ") " << " " << arr[max].name << " - " << arr[max].director << " - " << arr[max].genre << " - " << arr[max].rating << " - " << arr[max].price << " AZN" << endl;
			 }
		 }
	 }
	  else {
		 cout << "Error!" << endl;
	 }

	 cout << "Press any key to return main menu ...";
	 _getch();
	 menu(arr, len);
 }

