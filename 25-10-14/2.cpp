#include <iostream>
using namespace std;

template <class T>
class myclass
{
    T x;

public:
    myclass(T a)
    {
        x = a;
        cout << "Generic Class" << endl;
    }
    T getx() { return x; }
};

template <>
class myclass<int>
{
    int x;

public:
    myclass(int a)
    {
        cout << "int class\n";
        x = a * a;
    }
    int getx() { return x; }
};

int main()
{
    myclass<double> d(9.81);
    cout << "double " << d.getx() << endl;
    myclass<int> i(10);
    cout << "int square " << i.getx() << endl;
}