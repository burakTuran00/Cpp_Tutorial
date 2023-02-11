#include <iostream>
using namespace std;

int main()
{
    // fill() = Fills a range of elements with a specifed value
    // fill(begin,end,value)
    const int size = 100;
    string foods[size];

    fill(foods, foods + (size / 2), "pizza");
    fill(foods + (size / 2), foods + size, "hamburger");

    for (string food : foods)
    {
        cout << food << '\n';
    }
    return 0;
}