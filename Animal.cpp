#include "Animal.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int Animals() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Cheetah", 1775);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

}
