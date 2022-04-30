#include "Triangle.h"

double Triangle::GetHeight()
{
	return height;
}
double Triangle::GetBase()
{
	return base;
}

double Triangle::SetHeight(double value)
{
	height = value;
	return height;
}
double Triangle::SetBase(double value)
{
	base = value;
	return base;
}

double Triangle::GetArea()
{
	return ((GetHeight() * GetBase()) / 2);
}