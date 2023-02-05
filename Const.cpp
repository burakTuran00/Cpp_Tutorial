#include <iostream>

using namespace std;

int main()
{
    // (only-read)

    const double PI = 3.14;
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int Light_Speed = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circumference << " cm" << endl;
    cout << WIDTH << "x" << HEIGHT << endl;

    return 0;
}