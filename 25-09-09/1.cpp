//Virtual Functions

#include <iostream>

using namespace std;

class car {
    public:
        virtual void drive() {
            cout << "Driving a Car\n";
        }
};

class tata: public car{
    public: 
        void drive(){
            cout <<"This is a Tata\n";
        }
};

class rr: public car{
    public:
        void drive(){
            cout << "This is a Rolls Royce\n";
        }
};

int main() {
    car *p, c1;
    tata t1;
    rr t2;
    p = &c1;
    p->drive();
    p = &t1;
    p->drive();
    p = &t2;
    p->drive();

    return 0;

    /*
    output 
    without virtual function in the base class 
    Driving a Car
    Driving a Car
    Driving a Car   

    with virtual function
    Driving a Car
    This is a tata
    This is a Rolls Royce

    */

}
