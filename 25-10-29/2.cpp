#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<char> v(10);
    vector<char>::iterator p;

    int i = 0;
    p = v.begin();
    while (p != v.end())
    {
        *p = i + 'a';
        p++;
        i++;
    }

    cout << "Elements: \n";
    p = v.begin();

    while (p != v.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << "\n";
    cout << "Expanding the vector\n";
    for (i = 0; i < 10; i++)
    {
        v.push_back(i + 10 + 'a');
    }
    cout << "New size = " << v.size() << "\n";
    cout << "New Contents\n";
    p = v.begin();

    while (p != v.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << "\n";
    p = v.begin();
    while (p != v.end())
    {
        *p = *p - 32;
        p++;
    }

    cout << "Modified contents\n";
    p = v.begin();
    while (p != v.end())
    {
        cout << *p << " ";
        p++;
    }

    cout << "\n";
    return 0;
}