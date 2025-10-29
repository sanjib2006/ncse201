- The program statement that we want to monitor for exception is written in a try block.
- If exception occurs within tryblock, it is thrown using the *`throw`* keyword.

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n";

    try
    {
        cout << "Inside try block\n";
        throw 100;
        cout << "Bla bla bla\n";
    }
    //no other code in between try and catch
    catch (int i)
    {
        cout << "End\n";
    }
    return 0;
}
```

*try changing int to double --- you get error*

- An exception can be thrown from outside the try block as long as it is thrown by a function that is called within try block

``` cpp
#include <iostream>
using namespace std;

void Xtest(int test)
{
    cout << "Inside Xtest, test is: " << test << "\n";
    if (test)
        throw test;
}

int main()
{
    cout << "Start\n";
    try
    {
        cout << "Inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch (int i)
    {
        cout << "Caught Exception: " << i << "\n";
    }
    cout << "End\n";
    return 0;
}
```
*output*
``` bash
Start
Inside try block
Inside Xtest, test is: 0
Inside Xtest, test is: 1
Caught Exception: 1
End
```

``` cpp
#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test)
            throw test;
    }
    catch (int i)
    {
        cout << "caught exception" << i << "\n";
    }
}

int main()
{
    cout << "Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout << "End\n";
    return 0;
}
```
*output*
``` shell
Start
caught exception1
caught exception2
caught exception3
End
```

``` cpp
#include <iostream>
#include <cstring>
using namespace std;

class myExp
{
public:
    char str_what[80];
    int what;
    myExp()
    {
        *str_what = 0;
        what = 0;
    }
    myExp(char *s, int a)
    {
        strcpy(str_what, s);
        what = a;
    }
};

int main()
{
    int i;
    try
    {
        cout << "Enter +ve integer\n";
        cin >> i;
        if (i < 0)
        {
            throw(myExp("Negative Integer", i));
        }
    }
    catch (myExp e)
    {
        cout << e.str_what << " ";
        cout << e.what << "\n";
    }
    return 0;
}
```

*for +ve integers - no output*
*for -ve integers- catch is executed*

``` cpp
#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test)
            throw test;
        else
            throw "Value is zero";
    }
    catch (int i)
    {
        cout << "Exception#:" << i << "\n";
    }
    catch (const char *str)
    {
        cout << "Caught a string: ";
        cout << str << "\n";
    }
}

int main()
{
    cout << "Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout << "End\n";
    return 0;
}
```
*output*
``` 
Start
Exception#:1
Exception#:2
Caught a string: Value is zero
Exception#:3
End
```

### In case of Derived Class
``` cpp
#include <iostream>
using namespace std;

class B
{
};

class D : public B
{
};

int main()
{
    D derived;
    try
    {
        throw derived;
    }
    catch (B b)
    {
        cout << "Caught base class\n";
    }
    catch (D d)
    {
        cout << "Caught derived class\n";
    }
    return 0;
}
```
*output- the one (base/derived) which appears first*
``` bash
Caught base class
```

- `Catch` clause of a `base` class will also matchany class derived from that base
- If you want to catch exceptions of both a base class and a derived class type, put derived class first in the catch sequence because the base class catches will also catch derived classes.

*catching any type of exception*
- use a generic block with parameter `(...)`
``` cpp
#include <iostream>
using namespace std;

void Xhandler(int test) {
    try{
        if(test == 0) throw test;
        if(test == 1) throw 'a';
        if(test == 2) throw 10.5;
    }
    catch(...){ //generic block
        cout <<"one exception has occurred\n";
    }
};

int main() {
    cout << "Start\n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout << "End\n";
    return 0;
}
```

*output*
``` bash
Start
one exception has occurred
one exception has occurred
one exception has occurred
End
```


``` cpp
void Xhandler(int test) {
    try{
        if(test == 0) throw test;
        if(test == 1) throw 'a';
        if(test == 2) throw 10.5;
    }
    catch(int i) {
        cout << "one integer exception has occured\n";
    }
    catch(...){
        cout <<"one exception has occurred\n";
    }
};
```
``` bash 
Start
one integer exception has occured
one exception has occurred
one exception has occurred
End
```

*what if generic block was before the other ones*
``` cpp
void Xhandler(int test) {
    try{
        if(test == 0) throw test;
        if(test == 1) throw 'a';
        if(test == 2) throw 10.5;
    }
    catch(...){ //error
        cout <<"one exception has occurred\n";
    }
    catch(int i) {
        cout << "one integer exception has occured\n";
    }
};
```
*OUTPUT __error__*
- the catch block that handles all exception`(...)` should be the last catch block

*Restricting a function to throw certain exceptions-*
- You can restrict a function to throw certain types of exception only
- **WORKS ONLY IN c++11 and older versions**
``` cpp
#include <iostream>
using namespace std;

void Xhandler(int test) throw(int, char, double)
{
    if (test == 0)
        throw test;
    if (test == 1)
        throw 'a';
    if (test == 2)
        throw 10.5;
}

int main()
{
    cout << "Start\n";
    try
    {
        Xhandler(0);
    }
    catch (int i)
    {
        cout << "Caught integer\n";
    }
    catch (char c)
    {
        cout << "Caught character\n";
    }
    catch (double d)
    {
        cout << "Caught double\n";
    }
    return 0;
}
```

- if only `throw()` is present then output is 
```
Start
terminate called after throwing an instance of 'int'
Aborted (core dumped)
```

### Re throwing of exception
``` cpp
#include <iostream>
using namespace std;

void Xhandler()
{
    try
    {
        throw "hello";
    }
    catch (const char *)
    {
        cout << "Xhandler: caught char*\n";
        throw; // re throwing
    }
}

int main()
{
    try
    {
        Xhandler();
    }
    catch (const char *)
    {
        cout << "main: caught char*\n";
    }
    return 0;
}
```
*output*
``` bash
Xhandler: caught char*
main: caught char*
```

---

- `terminate()` and `unexpected()` two functions are used when something goes wrong during exception handling process.


- inside dummy throw 

```cpp
#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

void my_thandler()
{
    cout << "Inside my terminate\n";
    abort();
}
int main()
{
    set_terminate(my_thandler);
    try
    {
        cout << "Inside try block\n";
        throw 100;
    }
    catch (double i)
    {
    }
    return 0;
}

```
*output*
``` bash
Inside try block
Inside my terminate
Aborted (core dumped)
```

- the `unexpected()` function is called when a function attempts to throw an exception that is not allowed by its throwlist.
- By default `unexpected()` calls terminate.

``` cpp 
//works in cpp 11 or older only 
#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

void my_unexpected()
{
    cout << "Inside my unexpected\n";
    abort();
}

void dummy_throw() throw(double)
{
    cout << "Inside dummy throw\n";
    throw 100;
}
int main()
{
    set_unexpected(my_unexpected);
    try
    {
        dummy_throw();
    }
    catch (double i)
    {
    }
    return 0;
}

```
*output*
``` bash
Inside dummy throw
Inside my unexpected
Aborted (core dumped)
```

- try changing abort() to terminate()
```
void my_unexpected()
{
    cout << "Inside my unexpected\n";
    terminate();
}
```
*output*
``` bash
Inside dummy throw
Inside my unexpected
terminate called after throwing an instance of 'int'
Aborted (core dumped)
```

- if you change `set_unexpected()` to `set_terminate` the previous one then it runs into infinite loop
``` cpp
#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

void my_unexpected()
{
    cout << "Inside my unexpected\n";
    terminate();
}

void dummy_throw() throw(double)
{
    cout << "Inside dummy throw\n";
    throw 100;
}
int main()
{
    set_terminate(my_unexpected); //this line
    try
    {
        dummy_throw();
    }
    catch (double i)
    {
    }
    return 0;
}

```

*output* infinite loop printing
``` bash
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
Inside my unexpected
...
```

### since dynamic throw of function is depreciated in c++11

- use the `noexcept` specifier for that 
- `noexcept(expression)` the expression is a bool value either true or false 
- true - no exception is thrown
- false - might throw exception if occurs