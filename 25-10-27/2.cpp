#include <iostream>
using namespace std;

void dummy_throw() throw(double) {
    cout << "Inside dummy throw\n";
    throw 100;
}

int main() {
    try {
        dummy_throw();
    }
    catch(int i) {
        cout << "Inside catch\n";
    }
    return 0;
}