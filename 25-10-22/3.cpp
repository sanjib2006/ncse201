#include <iostream>
using namespace std;

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

int main() {
    cout << "Start\n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout << "End\n";
    return 0;
}