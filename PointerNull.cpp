#include <iostream>
using namespace std;

int main()
{
    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigend to a pointer.

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        cout << "address was not assigned!\n";
    }
    else
    {
        cout << "address was assigned!\n";
        cout << *pointer << endl;
    }

    return 0;
}