#include <iostream>
#include "MyString.h"
#include "MyBitString.h"
using namespace std;






int main() {
	char test[5]{ "Test" };
	MyString a(test);
	cout << a.print() << endl;;
	MyString b{"Test"};
	cout << (b == a) << endl;

	cout << b.print()<< endl;
	MyBitString c{ "0101" };
	c.change_znak();
	cout << c.print() << endl;



	return 0;

}


