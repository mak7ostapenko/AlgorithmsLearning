#include <iostream>

using std::cout;
using std::endl;


int add(int a, int b)
{
    int result;

    result = a + b;
    return result;
}


int main()
{
    int adding;
    float c = 3.5;

    adding = add(4, 6);

    cout << "result of adding " << adding <<endl;
    cout << "Hello, World!" << endl;
}