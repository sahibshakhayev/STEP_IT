#include <iostream>
#include "Double.h"
#include "Coplex.h"
using namespace std;







int main() {
	Double a;
	Double b;
	Complex d;
	Complex e;
	a.set_data(3, 4);
	b.set_data(1, 2);
	d.set_data(3, -1);
	e.set_data(2, 3);
	a + b;
	cout << a.chislitel << " / " << a.znamenatel << endl;
	d.print();
	e.print();
	d + e;
	d.print();

	return 0;
}