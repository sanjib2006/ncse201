#include <iostream>

using namespace std;

template <typename X>
void f(X a)
{
    cout << "f " << a << endl;
}

void f(int a)
{
    cout << a << endl;
}

int main()
{
    int a = 10;
    float b = 3.17;
    f(a);
    f(b);

    return 0;
}