#pragma once
class MyString
{
public:
	MyString();
	MyString(const char str[]);
	MyString(const MyString& obj);
	~MyString();
	char* print();
	void operator = (MyString& other);
	MyString operator + (MyString& other);
	void operator += (MyString& other);
	bool operator == (MyString& other);
	bool operator != (MyString& other);
	size_t leng();
	void empty();


protected:
	char* arr;
	size_t len = 70;

};