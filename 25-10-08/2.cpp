//overloading ->

#include <iostream>
using namespace std;

class hello{
    public:
        int i; 
        hello *operator->() {
            return this;
        }

};

int main(){
    hello ob;
    ob->i = 10;
    cout << ob.i << " " << ob->i <<endl;
    return 0;
}