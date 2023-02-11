#include <iostream>
using namespace std;

int main()
{
    string cars[] = {"Corvette", "Mustang", "Camry"};

    cout << cars[0] << endl; // Corvette
    cout << cars[1] << endl; // Mustang
    cars[2] = "Camaro";

    int numbers[3];

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;

    return 0;
}