#include "Animal.h"
#ifndef ANIMALSINZOO
#define ANIMALSINZOO
#include <stdlib.h>
#include <iostream>
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo();
		AnimalsInZoo(unsigned int initialCap);

		bool store(Animal &another_animal);
		bool remove(const string& animal_name);
		Animal find(const string& animal_name);
		void readSizes(unsigned int &count, unsigned int &capacity);
		void show() const;
		unsigned int makeSpace(unsigned int how_many);
		void display();

	private:
		unsigned int numAnimals;
		Animal* newAnimal;
		unsigned int capacity;
};
#endif
