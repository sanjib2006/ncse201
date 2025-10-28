#include <iostream>
using namespace std;

void Xhandler()
{
    try
    {
        throw "hello";
    }
    catch (const char *)
    {
        cout << "Xhandler: caught char*\n";
        throw; // re throwing
    }
}

int main()
{
    try
    {
        Xhandler();
    }
    catch (const char *)
    {
        cout << "main: caught char*\n";
    }
    return 0;
}