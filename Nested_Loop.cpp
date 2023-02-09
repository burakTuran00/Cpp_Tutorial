#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    char symbol;

    cout << "How many rows: ";
    cin >> rows;

    cout << "How many columns: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol;
        }
        cout << "\n";
    }

     for (int i = 0; i < 10; i++)
     {
         for (int i = 0; i < 5; i++)
         {
             cout << i << ' ';
         }
         cout << "\n";
     }

    return 0;
}