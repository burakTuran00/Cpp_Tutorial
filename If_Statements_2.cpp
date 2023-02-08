#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    string condition;

    cout << "First Number: ";
    cin >> a;

    cout << "Second Number: ";
    cin >> b;

    cout << "(+) (-) (/) (*)  :";
    cin >> condition;

    if (condition == "+")
    {
        c = a + b;
    }
    else if (condition == "-")
    {
        c = a - b;
    }
    else if (condition == "/")
    {
        c = a / b;
    }
    else if (condition == "*")
    {
        c = a * b;
    }

    cout << c << endl;

    return 0;
}