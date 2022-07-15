#include <iostream>
#include "Double.h"

using namespace std;

void Double::set_data(int chislitel, int znamenatel) {
	this->chislitel = chislitel;
	if (znamenatel == 0)
	{
		cout << "Error! Znamenatel cannot be zero!" << endl;
	}
	else
	{
		this->znamenatel = znamenatel;
	}



}

void Double::add(int chislitel, int znamenatel) {
	int chis = (this->chislitel * znamenatel + this->znamenatel * chislitel);
	int znam = this->znamenatel * znamenatel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}

	this->chislitel = chis;
	this->znamenatel = znam;


}
void Double::dif(int chislitel, int znamenatel) {
	int chis = (this->chislitel * znamenatel - this->znamenatel * chislitel);
	int znam = this->znamenatel * znamenatel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}


	this->chislitel = chis;
	this->znamenatel = znam;


}
void Double::mul(int chislitel, int znamenatel) {
	int chis = this->chislitel * chislitel;
	int znam = this->znamenatel * znamenatel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}


	this->chislitel = chis;
	this->znamenatel = znam;


}
void Double::div(int chislitel, int znamenatel) {
	int chis = this->chislitel * znamenatel;
	int znam = this->znamenatel * chislitel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}


	this->chislitel = chis;
	this->znamenatel = znam;


}