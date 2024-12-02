#pragma once
#include "personal.h"
void Car::SetCarColor(string col)
{
	color = col;
}
void Car::Vivod()
{
	ofstream fout;
	fout.open("car.txt");
	cout << marka << " " << model << " " << color << " " << year << " " << power << " " << speed << endl;
}
Car::~Car()
{
}