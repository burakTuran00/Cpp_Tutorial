#include <iostream>
using namespace std;

struct Student
{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{
    /* struct = A structure that group related variables under one name
                structs can contain many different data types
                variables in a struct are knwon as 'members'
                members can be access with. "Class Member Access Operator"
    */

    Student student_1;

    student_1.name = "Spongebob";
    student_1.gpa = 3.2;
    student_1.enrolled = true;

    Student student_2;

    student_2.name = "Jack";
    student_2.gpa = 2.8;
    student_2.enrolled = true;

    Student student_3;

    student_3.name = "Arnold";
    student_3.gpa = 2.2;
    student_3.enrolled = false;

    cout << student_1.name << endl;
    cout << student_1.gpa << endl;
    cout << student_1.enrolled << endl;

    return 0;
}