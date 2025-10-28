#include <iostream>
using namespace std;

template <class X> 

void f(X a) {
    cout <<"inside f(x a)\n";
}

template <class X, class Y>

void f(X a, Y b){
    cout << "Inside f(x a, y b)\n";
}

int main() {
    f(10);
    f(12.4, 12);

    return 0;
}
