#include "Circle.h"
#include <math.h>

double const Circle::GetPI()
{
	return pi;
}
double Circle::GetRadius()
{
	return radius;
}

double Circle::SetRadius(double value)
{
	radius = value;
	return radius;
}

double Circle::GetArea()
{
	return (GetPI() * pow(GetRadius(), 2));
}
