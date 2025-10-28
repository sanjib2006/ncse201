
### Generic Functions 
- A generic function defines a set of general operations that can be applied to different types of data.
- We can create generic functions by using the keyword "template"
- SYNTAX -

``` cpp
template <class type> ret-type function-name(parameters)
{

//function body

}
```

*Examples*
- Swap
 ``` cpp
#include <iostream>

using namespace std; 

void elseswap(int &a, int &b) {
int temp = b;
b = a;
a = temp;
}

int main(){
int x = 10, y = 20;
cout << x << " " << y << endl;
elseswap(x, y);
cout << x << " " << y << endl;

return 0;
}
 ```
Output
``` bash
10 20
20 10
```

**Using Template**

``` cpp
#include <iostream>
using namespace std; 

template <class X>
void elseswap(X &a, X &b) {
X temp;
temp = b;
b = a;
a = temp;
}

int main(){
int x = 10, y = 20;
cout << x << " " << y << endl;
elseswap(x, y);
cout << x << " " << y << endl;
}
```

``` cpp
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
    f(a); // 10
    f(b); // f 3.17

    return 0;
}
```

---
### Overloading with generic function 
- Overloading is done based on number of parameters



#### Homework
> Create a generic function for array compaction 
>  `arr = { 2, 7, 9, 5, 1, 0, 9, 10 } `
>  `arr = { 2, 7, 9, 10 }`

## Check the class folder for the other examples

  