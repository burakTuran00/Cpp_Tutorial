#include <iostream>
using namespace std;

int Max(int x, int y)
{
    return (x > y) ? x : y;
}
double Max(double x, double y)
{
    return (x > y) ? x : y;
}

// Or We use our type or full type. Both variable must be same.

template <typename T>

T Max(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << Max(1.2, 2.3);

    return 0;
}