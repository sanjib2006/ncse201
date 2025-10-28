#include <iostream>
using namespace std;

class B
{
};

class D : public B
{
};

int main()
{
    D derived;
    try
    {
        throw derived;
    }
    catch (B b)
    {
        cout << "Caught base class\n";
    }
    catch (D d)
    {
        cout << "Caught derived class\n";
    }
    return 0;
}

/*
`Catch` clause of a `base` class will also matchany class derived from that base
- If you want to catch exceptions of both a base class and a derived class type, put derived class first in the catch sequence because the base class catches will also catch derived classes.
- 


*/