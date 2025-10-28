#include <iostream>
using namespace std;

template <class t>
class myclass
{
    t *arr;
    int size;

public:
    myclass(int s) : size(s)
    {
        arr = new t[size];
    }

    t &operator[](int index)
    {
        if (index >= 0 && index <= size)
        {
            return arr[index];
        }
        return arr[0];
    };
};

int main()
{
    myclass<int> intArray(5);
    for (int i = 0; i < 5; i++)
    {
        intArray[i] = i * 10;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << intArray[i] << " ";
    }
    cout << endl;

    myclass<double> doubleArray(4);
    doubleArray[0] = 1.5;
    doubleArray[1] = 2.7;
    doubleArray[2] = 3.9;
    doubleArray[3] = 3.9;

    for (int i = 0; i < 4; i++)
    {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    return 0;
}
