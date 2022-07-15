#include<iostream>

using namespace std;
int mystrlen(const char* str); //������� ���������� ����� ������.

char* mystrcpy(char* str1, const char* str2);
//������� �������� str2 � str1 � ���������� ��������� �� str1.
//������� ���������� ��������� �� ������ ������ (str1)

char* mystrcat(char* str1, const char* str2); //������� ������������ ������ str2 � ������ str1.
//������� ���������� ��������� �� ������ ������(str1).

char* mystrchr(char* str, char s);
//������� ������������ ����� ������� s � ������ str.
//������� ���������� ��������� �� ������ ������� 
//� �������� ��������, ���� 0, ���� ������ �� ��� ������.

char* mystrstr(char* str1, char* str2);
//������� ������������ ����� ��������� str2 � ������ str1.
//������� ���������� ��������� �� ������ ��������� str2 �
//������ str1, � ��������� ������ 0. 

int mystrcmp(const char* str1, const char* str2);
// ������� ���������� ��� ������ ���� ��� ����� ���������� (0), ������ ������ ������� (1), ������ ������ ������� (-1).

int StringToNumber(char* str); // ������� ����������� ������ �� ���� � �����

char* NumberToString(int number); // ������� ����������� ����� �  ������ �� ����.

char* Uppercase(char* str1); // �������  ��������� ������ � ������� �������

char* Lowercase(char* str1); // �������  ��������� ������ � ������ �������

char* mystrrev(char* str); // �������  ��������� ������ ��������.

int main()
{
	/*char word[] = "Salam Azerbaijan";
	const char* word2 = "Salam can";*/
	/*cout << mystrlen(word) << endl;
	cout << mystrlen(word2) << endl;*/

	cout << endl;
	char word3[20];
	char* word4 = new char[20];
	cin >> word3;
	cin >> word4;
	cout << word3 << " -  " << word4 << endl;
	word4 = mystrcpy(word4, word3);
	cout << word3 << " -  " << word4 << endl;
	char word5[20] = "Sahib";
	char* word6 = new char[20]{"Shakhayev "};
	cout << word5 << " -  " << word6 << endl;
	word6 = mystrcat(word6, word5);
	cout << word5 << " -  " << word6 << endl;
	word6 = mystrchr(word6, 'k');
	cout << word6 << endl;
	char* str1 = new char[20]{ "Hello Word!" };
	char* str2 = new char[20]{ "Hello Word!" };
	char* result = new char[20]{};
	result = mystrstr(str1, str2);
	cout << result << endl;
	cout << mystrcmp(str1,str2) << endl;
	char str[] = "89789";
	int val = StringToNumber(str);
	cout << val << endl;
	cout << NumberToString(val) << endl;
	cout << Uppercase(word5) << endl;
	cout << Lowercase(word5) << endl;
	cout << mystrrev(word5) << endl;
	return 0;





}
   

int mystrlen(const char* str)
{
	int length{};
	while (str[length++] != '\0'){}
	return length-1;
}

char* mystrcpy(char* str1, const char* str2)
{
	char* tmp = new char[mystrlen(str2) + 1];
	for (int i = 0; i < mystrlen(str2); i++)
	{
		tmp[i] = str2[i];
	}
	delete[] str1;
	str1 = tmp;
	str1[mystrlen(str2)] = '\0';
	return str1;
}
char* mystrcat(char* str1, const char* str2) {

	char* tmp = new char[mystrlen(str1) + mystrlen(str2)];


	for (int i = 0; i < mystrlen(str1); i++)
	{
		tmp[i] = str1[i];
	}
	int index = 0;
	for (int i = 0; i <= mystrlen(str2); i++)
	{
		tmp[mystrlen(str1)+i] = str2[i];
		
	}

	delete[] str1;
	str1 = tmp;
	str1[mystrlen(str1) + mystrlen(str2)] = '\0';
	return str1;




}
char* mystrchr(char* str, char s) {
	for (int i = 0; i < mystrlen(str); i++)
	{
		if (str[i] == s) {
			return &str[i];




		}
	}
	return 0;



}
char* mystrstr(char* str1, char* str2) {
	
	for (int i = 0; i < mystrlen(str1); i++)
	{
		int pos = i; 
		int j = 0;
		while (str1[i++] == str2[j++])
		{
			if (str2[j] == '\0')
			{
				return &str1[pos];
			}
		}
		i = pos;
	}

	return 0;

}
int mystrcmp(const char* str1, const char* str2) {
	int status = 0;
	int i = 0;
	while (str1[i] != '\0' || str1[i] != '\0') {

		if (str1[i] > str2[i]) {

			status = 1;
			return status;

		}

		else if (str1[i] < str2[i]) {

			status = -1;
			return status;


		}

		i++;



	}
	return status;
}
int StringToNumber(char* str) {
	int number = 0;

	
	for (int i = 0; i < mystrlen(str); i++) {
		number = number * 10 + str[i] - 48;
	}


	return number;







}
char* NumberToString(int number) {
	int size = 1;
	int size_ch = number;
	while (size_ch/=10)
	{
		size++;
	}
	char* tmp = new char[size];
	int pos = 0;
	int i = 0;
	while (number) {
		int x = number % 10;
		number /= 10;
		tmp[size-i-1] = x +'0';
		i++;





	}
	tmp[size] = '\0';
	return tmp;
	



}
char* Uppercase(char* str1) {

	char* tmp = new char[mystrlen(str1)];
	for (int i = 0; i < mystrlen(str1); i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z') {

			tmp[i] = str1[i] - 32;

		}
		else {

			tmp[i] = str1[i];

		}

	}
	tmp[mystrlen(str1)] = '\0';
	return tmp;


}
char* Lowercase(char* str1) {
	char* tmp = new char[mystrlen(str1)];
	for (int i = 0; i < mystrlen(str1); i++)
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z') {

			tmp[i] = str1[i] + 32;

		}
		else {

			tmp[i] = str1[i];

		}

	}
	tmp[mystrlen(str1)] = '\0';
	return tmp;





}
char* mystrrev(char* str) {
	char* tmp = new char[mystrlen(str)];
	for (int i = 0; i < mystrlen(str); i++)
	{
		tmp[i] = str[mystrlen(str) - 1 - i];
	}
	tmp[mystrlen(str)] = '\0';
	return tmp;


}