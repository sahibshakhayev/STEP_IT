#include <iostream>
#include "Double.h"
using namespace std;







int main() {
	Double a;
	a.set_data(3, 4);
	a.add(3, 4);
	a.mul(1, 4);
	a.dif(1, 3);
	a.div(1, 4);

	cout << a.chislitel << " / " << a.znamenatel << endl;


	return 0;
}