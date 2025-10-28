#include <iostream>
using namespace std;

template <class t1, class t2>
class myclass
{
    t1 i;
    t2 j;

public:
    myclass(t1 a, t2 b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << " " << j << "\n";
    }
};

int main()
{
    myclass<int, double> ob1(10, 8.9);
    myclass<char, string> ob2('h', "string");
    ob1.show();
    ob2.show();

    return 0;
}
