#include <iostream>
using namespace std;

void Xhandler(int test) throw(int, char, double)
{
    if (test == 0)
        throw test;
    if (test == 1)
        throw 'a';
    if (test == 2)
        throw 10.5;
}

int main()
{
    cout << "Start\n";
    try
    {
        Xhandler(2);
    }
    catch (int i)
    {
        cout << "Caught integer\n";
    }
    catch (char c)
    {
        cout << "Caught character\n";
    }
    catch (double d)
    {
        cout << "Caught double\n";
    }
    return 0;
}