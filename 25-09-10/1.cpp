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
        void drive(){
            cout <<"driving a baleno\n";
        }
};



int main() {
    car *c1 = new car;
    maruti *m1 = new maruti;
    baleno *b1 = new baleno;
    
    car *cars[3] = {c1, m1, b1};
    for(int i = 0; i < 3; i++) {
        cars[i]->drive();
    }   
    

    
}