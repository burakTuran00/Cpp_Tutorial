#include <iostream>
using namespace std;

int factorial(int value);

int main()
{

    int value;

    cout << "Value for factorial: ";
    cin >> value;

    cout << factorial(value);

    return 0;
}
int factorial(int value)
{
    // With for loop
    int result = 1;

    for (int i = 1; i <= value; i++)
    {
        result *= i;
    }

    // With if statemnt

    if (value > 1)
    {
        return value * factorial(value - 1);
    }
    else
    {
        return 1;
    }

    return result;
}