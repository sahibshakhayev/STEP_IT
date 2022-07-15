#include <iostream>
#include "MyArray.h"
using namespace std;







int main() {
	MyArray<int> test(7);
	cout << test.GetSize() << endl;
	test.SetSize(5, 5);
	cout << test.GetUpperBound() << endl;
	test.Add(4);
	cout << test.GetUpperBound();
	return 0;
}