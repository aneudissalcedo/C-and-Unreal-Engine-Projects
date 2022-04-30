#include "Rectangle.h"

double Rectangle::GetHeight()
{
	return height;
}
double Rectangle::GetWidth()
{
	return width;
}

double Rectangle::SetHeight(double value)
{
	height = value;
	return height;
}
double Rectangle::SetWidth(double value)
{
	width = value;
	return width;
}

double Rectangle::GetArea()
{
	return (GetHeight() * GetWidth());
}