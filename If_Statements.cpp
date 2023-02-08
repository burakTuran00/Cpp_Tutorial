#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "What's your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an Adult." << endl;
    }
    else if (age < 18)
    {
        cout << "You are a Child." << endl;
    }
    else
    {
        cout << "Something went wrong" << endl;
    }

    string password;
    string username;

    cout << "Username: ";
    getline(cin >> ws, username);

    cout << "Password: ";
    getline(cin >> ws, password);

    if (password == "qwerty" && username == "qwerty")
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }

    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Positive" << endl;
    }
    else if (number == 0)
    {
        cout << "Neuter" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }

    return 0;
}