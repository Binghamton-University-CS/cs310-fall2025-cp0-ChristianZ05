#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

bool AnimalsInZoo::store(Animal &another_animal){
	if (numAnimals >= capacity){
		Animal* newArr = new Animal[capacity * 2];
		for(unsigned int i = 0; i < numAnimals; ++i){
			newArr[i] = newAnimal[i];
		}

		delete[] newAnimal;
		newAnimal = newArr;
		capacity *= 2;
	}

	newAnimal[numAnimals] = another_animal;
	cout << "Animal " << another_animal.getSpecies() <<"added to spot " << numAnimals << " of the contained array." << endl;

	++numAnimals;
	return true;	
}

bool AnimalsInZoo::remove(const string& animal_name){
	for(unsigned int i =0; i < numAnimals; ++i){
		if(newAnimal[i].getSpecies() == animal_name){
			newAnimal[i] = newAnimal[numAnimals-1];
			--numAnimals;
			return true;
		}
	}

	cout << "Animal " << animal_name << " not found." << endl;
	return false;
}

Animal AnimalsInZoo::find(const string& animal_name){
	for(unsigned int i =0; i < numAnimals; ++i){
		if(newAnimal[i].getSpecies() == animal_name){
			return newAnimal[i];
		}
	}
	return Animal();
}

void AnimalsInZoo::readSizes(unsigned int &count, unsigned int &capacity){
	count = numAnimals;
	capacity = this->capacity;
}

void AnimalsInZoo::show() const{
	for (unsigned int i = 0; i < numAnimals;i++){
		cout << i << ": " << newAnimal[i].getSpecies() << ", " << newAnimal[i].getWeight() << " lbs";

		if(newAnimal[i].isDang()){
			cout << " be careful!'";
		}

		cout << endl;
	}
}

AnimalsInZoo :: AnimalsInZoo(){
	capacity = 1;
	numAnimals = 0;
	newAnimal = new Animal[capacity];
}

AnimalsInZoo :: AnimalsInZoo(unsigned int initialCap){
	if(initialCap == 0){
		initialCap = 1;
	}

	capacity = initialCap;
	numAnimals = 0;
	newAnimal = new Animal[capacity];
}


unsigned int AnimalsInZoo::makeSpace(unsigned int how_many = 0){
	unsigned int newSpace = 0;

	if(how_many > 0){
		newSpace = how_many;
	}
	else{
		newSpace = capacity; //Double
	}

	Animal* newArr = new Animal[capacity + newSpace];

	for(unsigned int i = 0; i < numAnimals; ++i){
		newArr[i] = newAnimal[i];
	}
	delete[] newAnimal;

	newAnimal = newArr;
	capacity = capacity + newSpace;

	return newSpace;
}
