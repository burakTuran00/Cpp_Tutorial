#include <iostream>
using namespace std;

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for (int i = 0; i < 20; i++)
    {
        if (i == 12)
        {
            break;
        }
        else if (i == 4)
        {
            continue;
        }

        std::cout << i << "\n";
    }

    cout << "---------------------------------------" << endl;

    return 0;
}