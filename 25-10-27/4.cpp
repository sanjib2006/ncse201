#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

void my_unexpected()
{
    cout << "Inside my unexpected\n";
    terminate();
}

void dummy_throw() throw(double)
{
    cout << "Inside dummy throw\n";
    throw 100;
}
int main()
{
    set_terminate(my_unexpected);
    try
    {
        dummy_throw();
    }
    catch (double i)
    {
    }
    return 0;
}
