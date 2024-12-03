#include <iostream>
#include <string>

using namespace std;

class myClass
{
public:
    int myNum;
    string myString;
};

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    myClass myObj;

    myObj.myNum = 14;
    myObj.myString = "Fash is me";

    cout << "your num is "<< myObj.myNum << " and your string is " << myObj.myString;
}
