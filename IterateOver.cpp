#include <iostream>
using namespace std;

int main()
{

    string students[] = {"Spongebob", "Patrick", "Sqidward", "Sandy", "Mr. Crab"};

    for (int i = 0; i < sizeof(students) / sizeof(string); i++)
    {
        cout << students[i] << endl;
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        cout << grades[i] << endl;
    }

    return 0;
}