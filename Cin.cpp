#include <iostream>
using namespace std;

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    string name;
    std::cout << "What's your name: ";
    std::cin >> name;

    int age;
    cout << "What's your age: ";
    cin >> age;

    std::cout << "Welcome, " << name << endl;

    cout << "Your age is " << age << ". " << name << endl;

    string fullname;
    cout << "What's your full name: ";
    getline(cin >> ws, fullname);

    // You can use just cin but, You'll recive some kind of error. Use like this. cin >> ws;

    cout << fullname << endl;

    return 0;
}

// Recommend to use (getline).