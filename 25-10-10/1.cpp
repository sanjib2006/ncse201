//Generic Function
/*
- A generic function defines a set of general operations that can be applied to diffferent types of data 
- we can create generic functions by using the keyword "template"
- 

template <class type> ret-type function-name(parameters)
{
function body
}

*/


#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}

int main(){
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;

}

