#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<char> v(10);
    int i;
    cout << "Size = " << v.size() << endl;
    for (i = 0; i < 10; i++)
    {
        v[i] = i + 'a';
    }
    cout << "Current contents\n";
    for (i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << "Expanding the vector\n";
    for (i = 0; i < 10; i++)
    {
        v.push_back(i + 10 + 'a');
    }
    cout << "New size = " << v.size() << "\n";
    cout << "New Contents\n";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < v.size(); i++)
    {
        v[i] = v[i] - 32;
    }
    cout << "Modified contents\n";
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}