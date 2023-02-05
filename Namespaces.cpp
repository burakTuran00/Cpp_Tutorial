#include <iostream>

using namespace std;

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}
namespace third
{
    int x = 3;
}
int main()
{
    int x = 0;

    std::cout << x << endl;         // Local version.
    std::cout << first::x << endl;  // Within the first namespace
    std::cout << second::x << endl; // Wtihin the second namespace

    std::cout << x;

    return 0;
}