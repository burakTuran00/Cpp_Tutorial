#include <iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void PrintCar(Car &car);

int main()
{
    Car car1;

    car1.model = "Mustang";
    car1.year = 2010;
    car1.color = "Grey";

    Car car2;

    car2.model = "Camaro";
    car2.year = 1969;
    car2.color = "Yellow-Black";

    PrintCar(car1);
    PrintCar(car2);

    return 0;
}

void PrintCar(Car &car)
{
    cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}