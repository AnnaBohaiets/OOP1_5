#pragma once
#include <string>
using namespace std;
class Liquid
{
private:
	string name;
	float density;
public:
	string getName() const { return name; }
	float getDensity() const { return density; }
	void setName(string name) { this->name = name; }
	void setDensity(float density) { this->density = density; }
	void Init(string name, float density);
	void Display() const;
	void Read();
};