#include <iostream>

using namespace std;

template <class X>
void elseswap(X &a, X &b)
{
    X temp;
    temp = b;
    b = a;
    a = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    elseswap(x, y);
    cout << x << " " << y << endl;
}
