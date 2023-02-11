#include <iostream>
using namespace std;

int main()
{
    // foreach loop = loop that esaes the traversal over an iterable data set
    string students[] = {"Spongebob", "Patrick", "Sqidward", "Sandy", "Mr. Crab"};

    for (string student : students)
    {
        cout << student << endl;
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (char grade : grades)
    {
        cout << grade << endl;
    }

    int numbers[] = {10, 20, 30, 40, 50};

    for (int number : numbers)
    {
        cout << number << endl;
    }
    return 0;
}