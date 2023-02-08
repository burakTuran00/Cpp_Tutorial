#include <iostream>
using namespace std;

int main()
{
    // condition ? expression_1 (true) : expression_2 (false)

    int grade;
    cout << "Grade: ";
    cin >> grade;

    grade >= 50 ? cout << "You pass!" : cout << "You fail!";

    int number = 10;

    number % 2 == 1 ? cout << "Odd" : cout << "Even";

    bool hungry = true;

    hungry ? cout << "You are hungry" : cout << "You are full";
    cout << (hungry ? "Your are hungry"  : "You are full");

    return 0;
}