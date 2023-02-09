#include <iostream>
using namespace std;

int main()
{
    // do some block of codes first. Then repeat again if condition is true.
    // This loop work once and if the condition is true the repeat again.

    int number;

    do
    {
        cout << "Enter a positive number: ";
        cin >> number;

    } while (number < 0);

    cout << "The number is " << number << endl;

    return 0;
}