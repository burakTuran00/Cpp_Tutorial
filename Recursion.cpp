#include <iostream>
using namespace std;

void Walk(int steps);

int main()
{
    /* recursion = a programming technique where a function
                   invokes itself from within
                   break a complex concept int a repeatable single step

        (iterative vs recursice)

        advantages = less code and is cleaner
                     useful for soritng and searching algorithms

        disadvantages = uses more memory and slower
    */

    Walk(10);

    return 0;
}
void Walk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        cout << "You take a step!\n";
    }

    // Or like that. Both is same.

    if (steps > 0)
    {
        cout << "You take a step!\n";
        Walk(steps - 1);
    }
}