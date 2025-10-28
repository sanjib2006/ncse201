#include <iostream>

using namespace std;

int myfunc(int);
int myfunc(int, int);



int main() {
    int (*fp)(int);
    int (*fp1)(int, int);
    fp = myfunc;
    fp1 = myfunc;
    cout << fp(2) << "\n";
    cout << fp1(2, 3) << "\n";
    return 0;
}
int myfunc(int x) {
    return x;
}

int myfunc(int x, int y ) {
    return x + y;
}