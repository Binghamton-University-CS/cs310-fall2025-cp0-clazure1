#include <iostream>
#include "AnimalsInZoo.h"
using namespace std;

    AnimalsInZoo::AnimalsInZoo(Animal a){
        animal = a;
        numAnimals = 1;
    }

    AnimalsInZoo::AnimalsInZoo() : animal("",0), numAnimals(0) {};

    void AnimalsInZoo::nadisplay(){
        cout << numAnimals << endl;
        if (numAnimals > 0){
          cout << "animal in zoo is -> ";
          animal.display();
        }
    }