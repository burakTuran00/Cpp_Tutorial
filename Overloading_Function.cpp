#include <iostream>
using namespace std;

void PrintHello();
void PrintHello(string name);
void PrintHello(string name, string surname);

int main()
{
    PrintHello();
    PrintHello("Jack");
    PrintHello("Jack", "Ironside");

    return 0;
}

void PrintHello()
{
    cout << "Hello" << endl;
}
void PrintHello(string name)
{
    cout << "Hello " << name << endl;
}
void PrintHello(string name, string surname)
{
    cout << "Hello " << name << " " << surname << endl;
}