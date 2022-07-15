#include "MyString.h"
#include "MyBitString.h"
#include <cstring>

MyBitString::MyBitString()
{
	arr = new char[len] {};
}

MyBitString::~MyBitString()
{
	delete[] arr;
	arr = nullptr;
}

char* MyBitString::print()
{
	return arr;
}


MyBitString::MyBitString(const char str[])
{
	this->len = strlen(str);
	arr = new char[len + 1]{};
	bool check = true;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if ((str[i] != '0') && (str[i] != '1')) {

			check = false;
			break;
		}
	}

	if (check) strcpy_s(arr, len + 1, str);

}

MyBitString::MyBitString(const MyBitString& obj)
{
	this->len = obj.len;
	this->arr = new char[this->len + 1];
	strcpy_s(arr, this->len + 1, obj.arr);

}

void MyBitString::operator=(MyBitString& other)
{

	this->len = other.len;
	delete[] arr;
	this->arr = new char[this->len + 1];
	strcpy_s(arr, this->len + 1, other.arr);

}


void MyBitString::operator+=(MyBitString& other)
{
	size_t strl = this->len + other.len;
	char* p = new char[strl + 1]{};
	strcat_s(p, strl + 1, this->arr);
	strcat_s(p, strl + 1, other.arr);
	arr = p;


}
MyBitString MyBitString::operator+(MyBitString& other)
{
	size_t strl = this->len + other.len;
	char* p = new char[strl + 1]{};
	strcat_s(p, strl + 1, this->arr);
	strcat_s(p, strl + 1, other.arr);
	return MyBitString(p);

}

bool MyBitString::operator==(MyBitString& other)
{
	if (strcmp(this->arr, other.arr) == 0) return true;
	return false;
}

bool MyBitString::operator!=(MyBitString& other)
{
	if (strcmp(this->arr, other.arr) == 0) return false;
	return true;
}

void MyBitString::change_znak()
{
	if (arr[0] == '0') arr[0] = '1';
	else arr[0] = '0';

}
