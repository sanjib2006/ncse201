#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Inside try block\n";
        throw 100.00;
    }
    catch(double i) {

    }
    return 0;
}