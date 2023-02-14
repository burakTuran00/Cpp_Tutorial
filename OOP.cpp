#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    string occupation;
    int age;

    void Eat()
    {
        cout << "I'm eating now!" << endl;
    }
    void Drink()
    {
        cout << "I'm drinking now!" << endl;
    }
    void Sleep()
    {
        cout << "I'm sleeping now!" << endl;
    }
};

int main()
{
    // object = a collection of attributes and methods
    //          They can have characteristics and could peform actions
    //          Can be used the mimic real world items (ex. Phone,Book)
    //          Create form a class which acts as a "blue-print"

    Human human_1;

    human_1.name = "Rick";
    human_1.occupation = "Scientist";
    human_1.age = 56;

    cout << human_1.name << endl;
    cout << human_1.occupation << endl;
    cout << human_1.age << endl;

    human_1.Eat();
    human_1.Drink();
    human_1.Sleep();

    Human human_2;

    return 0;
}