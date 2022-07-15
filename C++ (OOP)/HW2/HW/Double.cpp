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

void Double::operator + (const Double& other) {
	int chis = (this->chislitel * other.znamenatel + this->znamenatel * other.chislitel);
	int znam = this->znamenatel * other.znamenatel;

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
void Double::operator - (const Double& other) {
	int chis = (this->chislitel * other.znamenatel - this->znamenatel * other.chislitel);
	int znam = this->znamenatel * other.znamenatel;
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
void Double::operator * (const Double& other) {
	int chis = this->chislitel * other.chislitel;
	int znam = this->znamenatel * other.znamenatel;

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
void Double::operator / (const Double& other) {
	int chis = this->chislitel * other.znamenatel;
	int znam = this->znamenatel * other.chislitel;

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