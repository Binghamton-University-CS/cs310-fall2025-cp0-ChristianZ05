#ifndef ANIMAL_H
#define ANIMAL_H
#include <stdlib.h>
#include <iostream>
using namespace std;

class Animal {
   public:
      Animal(string speciesName, float heaviness, bool danger){
      	species = speciesName;
	weight = heaviness;
	dang = danger;
      }

      Animal() : species(""), weight(0.0), dang(false){};

   

      void display() {
	string dangerStatus;

	if (dang) {
    		dangerStatus = "Yes";
	} else {
    		dangerStatus = "No";
	}
         cout << species << "Weight: " << weight << ", Dangerous: " << dangerStatus << endl;
      }

      //Getter functions for all parameters
      string getSpecies() const {
	      return species;
      } 
      float getWeight() const{
	      return weight;
      }
      bool isDang() const{
	      return dang;
      }

   private:
      string species = "";
      unsigned int year_discovered = 0;
      float weight;
      bool dang;
};
#endif

