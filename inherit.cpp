#include <iostream>

using namespace std;

class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Pum Pum";
    }
};

class Car: public Vehicle, public MyOtherClass
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    myCar.myOtherFunction();
    return 1;
}
