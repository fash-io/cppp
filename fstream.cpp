#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string myText;

    ifstream myFile("new.txt");

    while(getline(myFile, myText))
    {
        cout << myText;
    }

    myFile.close();
}
