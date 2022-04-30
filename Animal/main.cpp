#include <iostream>
#include "Dog.h"
using std::cout;

int main()
{
	//Instances of the Dog class
	Dog dalmatian;
	Dog bulldog;

	//Set properties for the dalmatian instance object
	dalmatian.SetBreed("Dalmatian");
	dalmatian.SetColor("white with black circles");
	dalmatian.SetHeight(4.5);
	dalmatian.SetWeight(120);

	//Set properties for the bulldog instance object
	bulldog.SetBreed("Bulldog");
	bulldog.SetColor("brown");
	bulldog.SetHeight(3);
	bulldog.SetWeight(85);

	cout << "Welcome to the Animal Channel!\n\n";

	dalmatian.DogCharacteristics();
	bulldog.DogCharacteristics();

	system("pause");
	return 0;
}