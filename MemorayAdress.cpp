#include <iostream>
using namespace std;

int main()
{
    // memory adress = a location in memory where data is stored
    // a memory adress can accessed with &  (Address of operator)

    string name = "Bro";
    int age = 21;
    bool student = true;

    cout << &name << endl;
    cout << &student << endl;
    cout << &age << endl;

    return 0;
}