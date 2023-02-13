#include <iostream>
using namespace std;

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thusday = 4,
    friday = 5,
    saturday = 6,
};
enum Flavor
{
    vanilla,
    mint,
    chocolate,
    strawberry
};

int main()
{

    // enums = a user-defined data type that consists
    //         of paried name-integer constants.
    //         GREAT if you have a set of potential options

    Day today = sunday;

    switch (today)
    {
    case sunday:
        cout << "sunday" << endl;
        break;
    case monday:
        cout << "monday" << endl;
        break;
    case tuesday:
        cout << "tuesday" << endl;
        break;
    case wednesday:
        cout << "wednesday" << endl;
        break;
    case thusday:
        cout << "thusday" << endl;
        break;
    case friday:
        cout << "friday" << endl;
        break;
    case saturday:
        cout << "saturday" << endl;
        break;
    }
    return 0;
}