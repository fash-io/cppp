#include <iostream>
#include <fstream>
using namespace std;

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};
class Cat : public Animal {
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  Cat myCat;

  myAnimal.animalSound();
  myPig.animalSound();
  myCat.animalSound();
  myDog.animalSound();
  return 0;
}
