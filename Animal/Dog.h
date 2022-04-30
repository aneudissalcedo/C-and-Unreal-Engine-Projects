#pragma once
#include <iostream>
using std::string;

class Dog
{
private:
	//Declaration of variables
	string breed;
	string color;
	double height;
	double weight;

public:
	//Get the value of variables
	string GetBreed() { return breed; }
	string GetColor() { return color; }
	double GetHeight() { return height; }
	double GetWeight() { return weight; }

	//Set value to variables
	string SetBreed(string value);
	string SetColor(string value);
	double SetHeight(double value);
	double SetWeight(double value);

	//Dog behaviors
	void Shake();
	void Sit();
	void LayDown();

	//Print the dog characteristics
	void DogCharacteristics();
};

