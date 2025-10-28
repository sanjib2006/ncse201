#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

void my_thandler()
{
    cout << "Inside my terminate\n";
    abort();
}
int main()
{
    set_terminate(my_thandler);
    try
    {
        cout << "Inside try block\n";
        throw 100;
    }
    catch (double i)
    {
    }
    return 0;
}
