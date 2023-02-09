#include <iostream>
using namespace std;

// We change void to varieble

double Square(double length)
{
    return (length * length);
}
double Volume(double length)
{
    return (length * length * length);
}

int main()
{
    // return = return a value back to the spot
    //          where you called the encompassing function

    double length;

    cout << "Length: ";
    cin >> length;

    double area = Square(length);
    double volume = Volume(length);

    cout << "Area: " << area << " cm^2" << endl;
    cout << "Volume: " << volume << " cm^3" << endl;
    return 0;
}