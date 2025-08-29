#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("RandomAnimal1", 1999);
   AnimalsInZoo animal3(animal2);

   delete animal1;
   animal1 = new Animal("RandomAnimal2", 1777);


   animal1->display();
   animal2.display();
   animal3.nadisplay();

   delete animal1;
}
