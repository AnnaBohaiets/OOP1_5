#include "Alcohol.h"
#include <iostream>
using namespace std;
void Alcohol::Init(float alco, Liquid liquid)
{
	setAlco(alco);
	setLiquid(liquid);
}
void Alcohol::Display() const
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Display(); // ������������� �����������
	cout << "alco = " << alco << endl;
}
void Alcohol::Read()
{
	float alco;
	Liquid L;
	cout << endl;
	cout << "Liquid = ? " << endl;
	L.Read(); // ������������� �����������
	cout << "alco = ? "; cin >> alco;
	Init(alco, L);
}