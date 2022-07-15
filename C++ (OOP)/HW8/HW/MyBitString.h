#pragma once
class MyBitString :public MyString
{
public:
	MyBitString();
	MyBitString(const char str[]);
	MyBitString(const MyBitString& obj);
	~MyBitString();
	char* print();
	void operator = (MyBitString& other);
	MyBitString operator + (MyBitString& other);
	void operator += (MyBitString& other);
	bool operator == (MyBitString& other);
	bool operator != (MyBitString& other);
	void change_znak();

};