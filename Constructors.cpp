#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;
    Student(string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    // constructor = special method that is automaticlly called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student_1("Rick", 56, 4);

    cout << student_1.name << endl;
    cout << student_1.age << endl;
    cout << student_1.gpa << endl;

    Student student_2("Morty", 15, 2.6);

    cout << student_2.name << endl;
    cout << student_2.age << endl;
    cout << student_2.gpa << endl;

    return 0;
}