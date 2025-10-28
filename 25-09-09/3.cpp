//some strange behaviour

#include <iostream>

using namespace std;

class car {
    public:
        virtual void drive(){
            cout << "Driving a car\n";
        }
    
};

class maruti: public car {
    public:
        void drive() {
            cout <<"Driving a maruti\n";
        }
    
};

class baleno: public maruti{
    public:
        // void drive(){
        //     cout <<"driving a baleno\n";
        // }
};

void func(car &a) {
    a.drive();
}

int main() {
    car c1;
    maruti m1;
    baleno b1;
    func(c1);
    func(m1);
    func(b1);
    //make the base class (top most) only virtual so all derived classes become virtual 
    car *c2;
    c2 = &c1;
    c2->drive();
    c2 = &m1;
    c2->drive();
    c2 = &b1;
    c2->drive();

    
}