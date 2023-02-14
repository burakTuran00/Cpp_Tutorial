#include <iostream>
using namespace std;

class Stove
{
private:
    int temperature = 0;

public:
    Stove(int temperature)
    {
        setTemperature(temperature);
    }
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            temperature = 0;
        }
        else if (temperature >= 10)
        {
            temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRİTEABLE
    Stove stove(0);
    stove.setTemperature(100000);

    cout << "The temperature setting is: " << stove.getTemperature() << endl;
    return 0;
}