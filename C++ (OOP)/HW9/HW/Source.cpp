#include <iostream>
using namespace std;
#include "Employer.h"
#include "Ploshad.h"










int main()
{
	Employee* emp[3];
	emp[0] = new President;
	emp[1] = new Manager;
	emp[2] = new Worker;
	for (int i = 0; i < 3; ++i)
		emp[i]->Print();

    float a, a1, b, c, c1, d, d1, d2;

    cout << "Pramouqolnik\n";
    cout << "Vvedite 1 vuyu storonu\n";
    cin >> a;
    cout << "Vvedite 1 vuyu storonu\n";
    cin >> a1;

    cout << "Qruq\n";
    cout << "Radius kruqa\n";
    cin >> b;

    cout << "Premouqolniy treuqolnik\n";
    cout << "Vvedite 1 katet\n";
    cin >> c;
    cout << "Vvedite 2 katet\n";
    cin >> c1;

    cout << "Trapeciya\n";
    cout << "Vvedite 1 voye osnovaniye\n";
    cin >> d;
    cout << "Vvedite 2 oye osnovaniye \n";
    cin >> d1;
    cout << "Vvedite visotu osnovaniye\n";
    cin >> d2;
    Math* equation[4] = { new rectangle(a,a1), new circle(b),new right_triangle(c,c1),new Trapeze(d,d1,d2) };
    for (int k = 0; k < 4; k++)
        equation[k]->Print();



}


