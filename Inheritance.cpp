#include <iostream>
using namespace std;

class Animal
{
public:
    bool alive = true;
    void Eat()
    {
        cout << "This animal is eating!" << endl;
    }
};

class Dog : public Animal
{
public:
    void Bark()
    {
        cout << "The dog goes woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void Meov()
    {
        cout << "The cat goes meow!" << endl;
    }
};

int main()
{
    // inheritance = A class can recieve attributes and methods from another class
    //               Children classes inherit from a Parent class
    //               Help to reuse similar code found within multiple classes.

    Dog dog;
    Cat cat;

    cout << dog.alive << endl;
    dog.Eat();
    dog.Bark();

    cout << cat.alive << endl;
    cat.Eat();
    cat.Meov();

    return 0;
}