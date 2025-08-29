#include "Animal.h"
class AnimalsInZoo{
    public:
        AnimalsInZoo(Animal a);
        AnimalsInZoo();
        
        void nadisplay();

    private:
        Animal animal;
        int numAnimals;
};