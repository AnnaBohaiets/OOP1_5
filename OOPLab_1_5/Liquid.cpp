#include "Liquid.h"
#include <iostream>
using namespace std;
void Liquid::Init(string name, float density)
{
	setName(name);
	setDensity(density);
}
void Liquid::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "density = " << density << endl;
}
void Liquid::Read()
{
	string name;
	float density;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "density = ? "; cin >> density;
	Init(name, density);
}