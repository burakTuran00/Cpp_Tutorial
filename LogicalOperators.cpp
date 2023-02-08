#include <iostream>
using namespace std;

int main()
{
    // && = check if two conditions are true.
    // || = check if at least one of two conditions are true.
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp > 0 && temp < 30)
    {
        cout << "The temperature is good!" << endl;
    }
    else
    {
        cout << "The temperature is bad!" << endl;
    }

    if (!sunny)
    {
        cout << "It is cloudy outside!" << endl;
    }
    else
    {
        cout << "It is sunny outside!" << endl;
    }

    return 0;
}