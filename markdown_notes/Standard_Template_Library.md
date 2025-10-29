# Standard_Template_Library (STL)

There are three foundational items of STL:
1. Containers
2. Algorithms
3. Iterators

## Containers
Containers are objects that hold other objects.

- `vector` defines a dynamic array
- `deque` creates a double-ended queue
- `list` creates a linear list
- `map` provides access to values (associative container) with unique keys

## Algorithms
Algorithms act on containers. They provide the means by which elements in a container can be manipulated.

## Iterators
Iterators are objects that are used to cycle through the contents of a container.

---
##
### vector

``` cpp
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
```

*output*
``` bash
Size = 10
Current contents
a b c d e f g h i j 
Expanding the vector
New size = 20
New Contents
a b c d e f g h i j k l m n o p q r s t 
Modified contents
A B C D E F G H I J K L M N O P Q R S T
```

- Using the iterator
``` cpp
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
```
*output*
``` bash
Elements: 
a b c d e f g h i j 
Expanding the vector
New size = 20
New Contents
a b c d e f g h i j k l m n o p q r s t 
Modified contents
A B C D E F G H I J K L M N O P Q R S T
```
