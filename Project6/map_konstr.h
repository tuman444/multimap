#pragma once
#include "personal.h"
Car::Car(string _marka, string _model, string _color, int _year, int _power, int _speed)
{
	if (_year > 1980 && _year < 2025)
	{ year = _year;}
	else { year = 0; }
	if (_power > 60 && _power < 800)
	{
		power = _power;
	}
	else { _power = 0; }
	if (_speed > 1980 && _speed < 2025)
	{
		speed = _speed;
	}
	else { speed = 0; }
	
	string color_lst[] = { "Чёрный", "Белый", "Красный", "Синий", "Желтый", "Серый", "Оранжевый" };
	for (size_t i = 0; i < size(color_lst); i++)
	{
		if (_color == color_lst[i])
		{
			color = _color; break;
		}
		else
		{
			color = "(New)" + _color;
		}
	}
	ifstream fin;
	vector <string> marka_lst;
	fin.open("data.txt");
	string key, value;
	while (fin>>key>>value)
	{
	    marka_lst.push_back(key);
	}
	fin.close();
	for (size_t i = 0; i < size(marka_lst); i++)
	{

	}
}
