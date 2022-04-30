#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	double const pi = 3.14159;
	double radius;

public:
	double const GetPI();
	double GetRadius();

	double SetRadius(double value);

	double GetArea() override;
};

