#include <iostream>
using namespace std;

int main()
{
    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address of operator
    // * dereference operator

    string name = "Bro";
    int age = 21;

    string freePizzas[5] = {"pizza_1", "pizza_2", "pizza_3", "pizza_4", "pizza_5"};

    string *pName = &name;
    int *pAge = &age;

    string *pFreePizzas = freePizzas;

    cout << *pName << endl; // variable(Bro)
    cout << pAge << endl;   // address

    cout << pFreePizzas << endl;

    return 0;
}