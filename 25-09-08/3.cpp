//virtual functions

#include <iostream>
using namespace std;

class base {
    public:
        //check it with and without virtual 

        virtual void vfunc() {
            cout << "this is base vfunc\n";

        }
        
};

class derived1: public base {
    public:
        void vfunc() {
            cout <<"this is d1 vfunc" <<endl;
        }
};
class derived2: public base {
    public:
        void vfunc() {
            cout <<"this is d2 vfunc" <<endl;
        }
};


int main() {
    base *p, b;
    derived1 d1;
    derived2 d2;
    p = &b;
    p->vfunc();
    p = &d1;
    p->vfunc();
    p = &d2;
    p->vfunc();

    /*
    output
    with virtual
    this is base vfunc
    this is d1 vfunc
    this is d2 vfunc

    without virtual 
    this is base vfunc
    this is base vfunc
    this is base vfunc
    */
   

}
