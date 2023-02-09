#include <iostream>
using namespace std;

void Hello()
{
    cout << "Hello World" << endl;
}

void Sum(int a, int b)
{
    cout << a + b << endl;
    Hello();
}

int main()
{
    Hello();

    int a, b;

    cout << "A: ";
    cin >> a;

    cout << "B: ";
    cin >> b;

    Sum(a, b);

    return 0;
}