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