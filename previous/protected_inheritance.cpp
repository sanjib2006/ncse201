#include <iostream>

using namespace std;

class base {
    public:
        int i, j;
        void setij(int x, int y) {i = x, j = y;}
        void showij() {
            cout << "i : " << i << "j : " << j << endl;
        }    
};

//changing the below public base to protected base makes the 
//base class public member func and var protected 
//you cant access base class members using derived class object (outside)

//to make them public again scope resolution of all member func and var is required in the derived class
class derived: private base{
        int k;
    public: 
        // base::setij;
        // base::i;
        // base::j;
        
        // base::showij;
        void setk() { setij(5, 6); k = i*j;}
        void showall(){
            cout << "k : " << k <<" ";
            showij();
        }
};

int main(){
    derived obj;
    obj.setij(4, 9);
    // obj.showall();
    // obj.showij();
    obj.setk();
    obj.showall();
    obj.showij();
    return 0;

}