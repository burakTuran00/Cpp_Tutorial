#include <iostream>
using namespace std;

void printNum();

int myNum = 2; // Global variable

int main()
{

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNumber = 1; // Local variable

    printNum();
    cout << myNum << endl;

    return 0;
}

void printNum()
{
    cout << myNum << endl;
}