#pragma once
#include <string>
#include "Liquid.h"
using namespace std;
class Alcohol
{
private:
	float alco;
	Liquid liquid;
public:
	float getAlco() const { return alco; }
	Liquid getLiquid() const { return liquid; }
	void setAlco(float alco) { this->alco = alco; }
	void setLiquid(Liquid liquid) { this->liquid = liquid; }
	void Init(float alco, Liquid liquid);
	void Display() const;
	void Read();
};