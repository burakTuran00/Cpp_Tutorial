#include <iostream>
using namespace std;

int main()
{
    double x = (int)3.14;
    std::cout << x << endl;

    std::cout << (char)100 << endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    std::cout << score << "%" << endl;

    return 0;
}