#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	Rectangle rectangle;
	Triangle triangle;
	Circle circle;

	rectangle.SetHeight(3);
	rectangle.SetWidth(4);
	rectangle.SetColor("black");

	triangle.SetHeight(5);
	triangle.SetBase(6);
	triangle.SetColor("yellow");

	circle.SetRadius(2);
	circle.SetColor("green");

	cout << "The "<< rectangle.GetColor() <<" Rectangle area is " << rectangle.GetArea() << endl;
	cout << "The "<< triangle.GetColor() <<" Triangle area is " << triangle.GetArea() << endl;
	cout << "The "<< circle.GetColor() <<" Circle area is " << circle.GetArea() << endl;

	cout<< endl;
	system("pause");
	return 0;
}