#include <iostream>
using namespace std;

int main()
{
    // sizeof() = determine the size in bytes of a :
    //            variable, data type, class, objects, etc.

    string name = "Bro Code";
    double gpa = 2.5;
    char grade = 'F';                     // 1 byte
    char grades[] = {'A', 'B', 'C', 'D'}; // 4 byte

    cout << sizeof(name) << endl;
    cout << sizeof(grades) / sizeof(char) << endl; // How many variable in an array.

    return 0;
}