#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    string x;
    do
    {
        cout << "Write something";
        cin >> x;
    } while (x.empty());
}

