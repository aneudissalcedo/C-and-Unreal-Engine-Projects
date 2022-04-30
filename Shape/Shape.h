#pragma once

#include <iostream>
using std::string;

class Shape
{
private:
	string color;
public:
	string GetColor();
	string SetColor(string value);

	virtual double GetArea();
};