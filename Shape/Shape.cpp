#include "Shape.h"

#include <iostream>
using std::string;

string Shape::GetColor()
{
	return color;
}

string Shape::SetColor(string value)
{
	color = value;
	return color;
}

double Shape::GetArea()
{
	std::cout << "**Base class called**";
	return 0;
}
