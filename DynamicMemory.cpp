#include <iostream>
using namespace std;

int main()
{
    /*dynamic memory = Memory that is allocated after the program
                       is already complied & running .
                       Use the 'new' operator allocate
                       memory in the heap rather than the stack

                       Useful when we do not know how much memory
                       we will need. Makes our program more flexible ,
                       especially when accepting user input.

    */

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout << "Address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;

    delete pNum;
    
    return 0;
}