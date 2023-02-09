#include <iostream>
using namespace std;

int main()
{
    int num, guess, tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "------------------Number Guessing Game------------------" << endl;

    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;

        tries++;

        if (guess > num)
        {
            cout << "High" << endl;
        }
        else if (guess < num)
        {
            cout << "Low" << endl;
        }
        else
        {
            cout << "Correct" << endl;
            cout << "You tried " << tries << " times." << endl;
        }

    } while (guess != num);

    return 0;
}