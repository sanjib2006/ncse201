#include <iostream>
#include <cstdlib>
using namespace std;

template <class T, int size>
class sarray
{
    T a[size];

public:
    sarray()
    {
        for (int i = 0; i < size; i++)
        {
            a[i] = i;
        }
    }

    T &operator[](int i);
};

template <class T, int size>
T &sarray<T, size>::operator[](int i)
{
    if (i < 0 || i > size - 1)
    {
        cout << "index " << i << " out of bound!" << endl;
        exit(1);
    }
    return a[i];
}

int main()
{
    sarray<int, 10> ob;
    for (int i = 0; i < 10; i++)
    {
        cout << ob[i] << " ";
    }
    cout << endl;
    // 0 1 2 3 4 5 6 7 8 9
    ob[15] = 50; // index 15 out of bound!
    return 0;
}