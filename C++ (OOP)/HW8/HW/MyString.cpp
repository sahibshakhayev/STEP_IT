#include "MyString.h"
#include <cstring>

MyString::MyString()
{
	arr = new char[len] {};
}

MyString::MyString(const char str[])
{
	this->len = strlen(str);
	arr = new char[len + 1];
	strcpy_s(arr, len + 1, str);

}

MyString::MyString(const MyString& obj)
{
	this->len = obj.len;
	this->arr = new char[this->len + 1];
	strcpy_s(arr, this->len + 1, obj.arr);

}

MyString::~MyString()
{
	delete[] arr;
	arr = nullptr;
}

char* MyString::print()
{
	return arr;
}

void MyString::operator=(MyString& other)
{

	this->len = other.len;
	delete[] arr;
	this->arr = new char[this->len + 1];
	strcpy_s(arr, this->len + 1, other.arr);

}

MyString MyString::operator+(MyString& other)
{
	size_t strl = this->len + other.len;
	char* p = new char[strl + 1]{};
	strcat_s(p, strl + 1, this->arr);
	strcat_s(p, strl + 1, other.arr);
	return MyString(p);

}
void MyString::operator+=(MyString& other)
{
	size_t strl = this->len + other.len;
	char* p = new char[strl + 1]{};
	strcat_s(p, strl + 1, this->arr);
	strcat_s(p, strl + 1, other.arr);
	arr = p;


}

bool MyString::operator==(MyString& other)
{
	if (strcmp(this->arr, other.arr) == 0) return true;
	return false;
}

bool MyString::operator!=(MyString& other)
{
	if (strcmp(this->arr, other.arr) == 0) return false;
	return true;
}

size_t MyString::leng()
{
	return this->len;
}

void MyString::empty()
{
	delete[] arr;
	arr = new char[len] {};
}
