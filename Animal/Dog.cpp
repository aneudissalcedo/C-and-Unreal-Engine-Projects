#include "Dog.h"

#include <iostream>
using std::cout;
using std::endl;

string Dog::GetBreed()
{
	return breed;
}
string Dog::GetColor()
{
	return color;
}
double Dog::GetHeight()
{
	return height;
}
double Dog::GetWeight()
{
	return weight;
}

string Dog::SetBreed(string value)
{
	breed = value;
	return breed;
}
string Dog::SetColor(string value)
{
	color = value;
	return color;
}
double Dog::SetHeight(double value)
{
	height = value;
	return height;
}
double Dog::SetWeight(double value)
{
	weight = value;
	return weight;
}

void Dog::Shake()
{
	//Placeholder for the shake behavior
	cout << "The " + GetBreed() + " can shake shake shake...\n";
}
void Dog::Sit()
{
	//Placeholder for the sit behavior
	cout << "The " + GetBreed() + " can sit down!\n";
}
void Dog::LayDown()
{
	//Placeholder for the lay down behavior
	cout << "The " + GetBreed() + " can lay down!\n";
}

void Dog::DogCharacteristics()
{
	//Print the breed, color, height and weight of the dog
	cout << "The dog is a " << GetColor() << " " << GetBreed() << "." << endl;
	cout << "The " << GetBreed() << " has a height of " << GetHeight()
		<< " feet with " << GetWeight() << " pounds.";
	cout << endl;
	cout << "The " << GetBreed() << " have the following abilities:" << endl;

	//List out the available behavior of the dog
	Shake();
	Sit();
	LayDown();

	cout << endl;
}