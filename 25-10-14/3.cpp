#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n";

    try
    {
        cout << "Inside try block\n";
        throw 100;
        cout << "Bla bla bla\n";
    }
    catch (double i)
    {
        cout << "End\n";
    }
    return 0;
}
