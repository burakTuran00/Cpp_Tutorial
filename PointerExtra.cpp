#include <iostream>
using namespace std;

void PointerFirst();
void PointerSecond(int *ptr);
void PointerThird();

int main()
{
    // PointerFirst();

    int a = 10;
    cout << "Value of A: " << a << endl;
    PointerSecond(&a);
    cout << "New Value of A: " << a << endl;

    return 0;
}

void PointerFirst()
{
    int a = 5;

    int *ptr = &a;

    // We created pointer, name of ptr.
    // Then We assigned the place of a into the ptr(pointer).

    cout << "Place of Variable: " << &a << endl;
    cout << "Place of Variable: " << ptr << endl;

    cout << "Value of Variable: " << *ptr << endl;

    *ptr = 10; // Now, value of a is not 5, it is 10.

    cout << "New Value of Variable: " << a << endl;
}

void PointerSecond(int *ptr)
{
    *ptr = 20;
    cout << "New Value of A in Funciton: " << *ptr << endl;
}

void PointerThird()
{
    int array[] = {0, 1, 2, 3};

    int *ptr = array; // First of index' place.

    cout << "Place of Array: " << ptr << endl;

    cout << "Value of Array: " << *ptr << endl;

    int *ptr2 = &array[2]; //  Third of index' place.

    string array2[] = {"Jack", "Daniel", "Lucas"};

    string *ptr3 = array2;

    cout << ptr3[2] << endl; // Lucas, Value of Third Index.
}
