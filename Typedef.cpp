#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

// You can use 'using' instead 'typedef'. using is more populer than typedef;

using numbers_t = int;
using texts_t = std::string;

int main()
{
    pairlist_t pairlist;
    text_t firstname = "Bro";

    number_t number = 25;

    std::cout << firstname << std::endl;
    std::cout << number << std::endl;
    return 0;
}