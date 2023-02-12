#include <iostream>
using namespace std;

void PrintInfo(const string name, const int age);

int main()
{
    // const parameter = parameter that is effectively read only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    string name = "Bro";
    int age = 21;

    PrintInfo(name, age);

    return 0;
}
void PrintInfo(const string name, const int age)
{
    // name = " ";  // This'll return error.
    // age = 0;

    cout << name << "\n";
    cout << age;
}