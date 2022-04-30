#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	double height;
	double base;

public:
	double GetHeight();
	double GetBase();

	double SetHeight(double value);
	double SetBase(double value);

	double GetArea() override;
};

