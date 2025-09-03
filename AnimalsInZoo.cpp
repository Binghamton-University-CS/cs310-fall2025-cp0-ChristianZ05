#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

AnimalsInZoo:: AnimalsInZoo (Animal animal)
	: numAnimals(1), animal(animal){}

AnimalsInZoo::AnimalsInZoo()
	:numAnimals(0), animal(){}

void AnimalsInZoo:: display(){
	cout << "Number of Animals: " << numAnimals << endl;
	if(numAnimals == 1){
		animal.display();
	}

}

