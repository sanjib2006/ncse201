#include<iostream>
using namespace std;

class a{
    int x;
    public:
    a(){
        x=0;
    }
    a(int n){
        x=n;
    }
};

int main(){
    a c,*b,*d;
    b=&c;
    c=a(4);
    d=&c;
    cout<<b<<" "<<d<<endl;
}