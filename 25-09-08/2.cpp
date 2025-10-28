//function pointers in the presence of class

#include <iostream>

using namespace std;

class X {
    public:
        int a;
        void print(int b ) {
            cout << b<<"\n";
        }
};



int main(){
    int X::*ptr = &X::a;
    void (X::*fptr)(int) = &X::print;
    X obj;
    obj.a = 10;
    cout <<obj.a;
    (obj.*fptr)(20);
    //it works 
    //resolve the errors 
}