#pragma once
#include "Shape.h"

class Rectangle: public Shape
{
private:
	double height;
	double width;

public:
	double GetHeight();
	double GetWidth();

	double SetHeight(double value);
	double SetWidth(double value);

	double GetArea() override;
};