#include <iostream>
using namespace std;

class Pizza
{
public:
    string topping1;
    string topping2;

    Pizza(string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    // overloaded constructor = multiple constructors with same name but different parameters
    //                          allows for varying arguments when instantiating an object

    Pizza pizza_1("pepperoni");
    cout << pizza_1.topping1 << endl;

    Pizza pizza_2("mushromms", "peapers");
    cout << pizza_2.topping1 << " and " << pizza_2.topping2 << endl;
    return 0;
}