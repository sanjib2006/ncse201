//Passing function pointers as parameter
#include <iostream>
using namespace std;

int mult(int a, int b) {return a*b;}

void print(int (*fptr)(int, int), int a, int b) {
    cout << a << "*" << b << " = " << fptr(a, b)<< endl;
}
int main() {
    int (*fptr)(int, int);
    fptr = mult;
    print(fptr, 10, 20);
    //output
    //10*20 = 200
    return 0;
}