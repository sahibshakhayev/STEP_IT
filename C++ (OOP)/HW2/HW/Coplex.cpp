#include "Coplex.h"
#include <iostream>





void Complex::set_data(int deys, int mnima)
{
	this->deys = deys;
	this->mnima = mnima;
}

void Complex::print()
{
   if (deys == 0)
	{
	   std::cout << "";
	}
   else  {
   
	   std::cout << deys;
    }
   if (mnima == 0)
   {
	   std::cout << "";
   }
   else if (mnima ==1 ) {

	   std::cout << "+" << "i";
   }
   else if (mnima < 1) {


	   std::cout << "-" << "i";


   }
   else if (mnima > 0) {

	   std::cout << "+" << mnima << "i";
   }
   else {

	   std::cout << mnima << "i";
   }

   std::cout << std::endl;
}


void Complex::operator+(const Complex& other)
{
	this->deys += other.deys;
	this->mnima += other.mnima;






}




void Complex::operator-(const Complex& other)
{
	this->deys -= other.deys;
	this->mnima -= other.mnima;
}

void Complex::operator*(const Complex& other)
{
	int i = 1;
	int otv1 = (this->deys * other.deys - this->mnima * other.mnima);
	int otv2 = i * (this->deys * other.mnima + other.deys * this->mnima);
	this->deys = otv1;
	this->mnima = otv2;




}

void Complex::operator/(const Complex& other)
{
	double r = other.deys * other.deys + other.mnima * other.mnima;
	deys = (deys * other.deys + mnima * other.mnima) / r;
	mnima = (mnima * other.deys- deys * other.mnima) / r;



}
