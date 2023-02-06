#include <iostream>
using namespace std;

// Addition (+)
// Subtraction (-)
// Multiply (*)
// Divide (/)
// Mod (%)

int main()
{
    int counter = 10;

    counter = counter + 1;
    counter += 1;
    counter++; // It's same the upper. counter(10) + 1;

    counter = counter - 1;
    counter -= 1;
    counter--; // It's same the upper. counter(10) - 1;

    counter = counter * 2;
    counter *= 2;

    counter = counter / 2;
    counter /= 2;

    int remainder = counter % 2;

    cout << remainder << endl;

    int number_1 = 6 - 5 + 4 * 3 / 2;
    int number_2 = 4 + (8 - 6) * 3;

    cout << number_1 << endl;

    return 0;
}

// (parenthesis) >  (multiplication & division) > (addition & subtraction)