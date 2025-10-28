#include <iostream>

using namespace std;

class cl {
    public:
    int i;
        cl (int j) { i = j;}
        int get_i () { return i;}
};

int main () {
    cl ob(23), ob1(30);
    int *p;
    int *q;
    p = &ob.i;
    q = &ob1.i;
    cout << *p  << endl;
    (*p)++;
    cout << p << " " << q << endl;
    return 0;
}