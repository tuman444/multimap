#include "personal.h"
#include "GetSet.h"
#include "map_konstr.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	multimap<string, string> car;
	/*m.emplace("AlfaRomeo", "Brera");
	m.emplace("AlfaRomeo", "MiTo");
	m.emplace("AlfaRomeo", "Giulietta");
	m.emplace("Audi", "A1");
	m.emplace("Audi", "A3");
	m.emplace("Audi", "A4");
	m.insert({ "BMW", "M3" });
	m.insert({ "BMW", "M4" });
	m.insert({ "BMW", "M5" });*/
	ifstream fin;
	fin.open("data.txt");
	string key, value;
	while (fin >> key >> value)
	{
		car.insert({ key, value });
	}
	for (auto & it : car)
	{
		cout << it.first << " " << it.second << "\n";
	}
	Car Lada("Lada", "Kalina", "Чёрный", 2000, 180, 200);
	Lada.Vivod();
}