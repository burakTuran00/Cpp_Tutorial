#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "What's a: ";
    cin >> a;

    cout << "What's b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << c << endl;

    return 0;
}