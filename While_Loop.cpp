#include <iostream>
using namespace std;

int main()
{
    string name;

    while (name.empty())
    {
        cout << "Enyer your name: ";
        getline(cin, name);
    }
    cout << "Hello " << name << endl;

    return 0;
}