#include <iostream> 
using namespace std;
class loc {
    int longitude, latitude;
    public: 
        loc(){}
        loc(int lg, int lt) {
            longitude = lg;
            latitude = lt;
        }
        void show() {
            cout <<longitude <<" " << latitude << endl;
        }
        loc operator+(loc op2) {
            loc temp;
            temp.longitude = op2.longitude + longitude;
            temp.latitude = op2.latitude + latitude;
            return temp;
        }   
        loc operator-(loc op2);
        loc operator=(loc op2);
        loc operator+=(loc op2);
        loc operator++();//prefix
        loc operator++(int x); //postfix

};

loc loc::operator-(loc op2){
    loc temp;
    temp.longitude = longitude - op2.longitude  ;
    temp.latitude = latitude - op2.latitude ;
    return temp;
}

loc loc::operator=(loc op2){
    longitude = op2.longitude  ;
    latitude = op2.latitude ;
    return *this;
}

loc loc::operator+=(loc op2){
    // longitude = longitude + op2.longitude  ;
    // latitude = latitude + op2.latitude ;
    return *this=*this+op2;
    
}

loc loc::operator++(){
    //this is for prefix 
    longitude++;
    latitude++;
    return *this;
}

loc loc::operator++(int x){
    //this is for prefix 
    longitude++;
    latitude++;
    return *this;
}

int main(){
    loc ob1(10, 20), ob2(5, 30);
    ob1.show(); 
    ob2.show();
    ob1 = ob1 + ob2;
    ob1.show();
    
    (ob1 + ob2).show();
    (ob1 - ob2).show();
    ob1=ob2;
    ob2.show();
    ob1.show();

    ob1+=ob2;
    ob2.show();
    ob1.show();
    ++ob1;
    ob1.show();
    ob1++;
    ob1.show();
    return 0;
}

//you cannot change the precedence of an operator 
//you cannot change the number of operands that an operator works on
