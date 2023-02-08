#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.length() > 10)
    {
        cout << "Your name cannot be over 10 characters." << endl;
    }
    else
    {
        cout << "Welcome" << endl;
    }

    if (name.empty()) // True or False
    {
        cout << "You did not enter your name!" << endl;
    }
    else
    {
        cout << "Hello" << endl;
    }

    name.clear();

    name.append("@gmail.com");

    name.at(0); // First character of name. Index of varieble.

    name.insert(0, "@");

    name.find(' '); // Give us the position of the first space;

    name.erase(0, 3); // Erase with number index

    return 0;
}