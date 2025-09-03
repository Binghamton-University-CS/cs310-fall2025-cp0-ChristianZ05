#include "Animal.h"
#ifndef ANIMALSINZOO
#define ANIMALSINZOO
#include <stdlib.h>
#include <iostream>
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo(Animal animal); //With animal
		AnimalsInZoo(); //Without animal
		void display();

	private:
		int numAnimals;
		Animal animal;

};
#endif
