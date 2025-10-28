#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test)
            throw test;
    }
    catch (int i)
    {
        cout << "caught exception" << i << "\n";
    }
}

int main()
{
    cout << "Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout << "End\n";
    return 0;
}