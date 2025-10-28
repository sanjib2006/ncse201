### Class with generic data types
``` cpp
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
    ob1.show(); // 10 8.9
    ob2.show(); // h string

    return 0;
}
```

### Generic array using class
``` cpp
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
```