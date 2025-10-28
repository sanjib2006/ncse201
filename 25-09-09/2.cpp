//Virtual Functions

#include <iostream>

using namespace std;

class car {
    public:
    //check here by removing and keeping the virtual keyword
    virtual void drive() {
            cout << "Driving a Car\n";

        }
};

class tata: public car{
    public: 
        void drive(){
            cout <<"This is a tata\n";
        }
};

class rr: public car{
    public:
        void drive(){
            cout << "This is a Rolls Royce\n";
        }
};

void func(car *p) {

    p->drive();
}

int main() {
    car  c1;
    tata t1;
    rr t2;
    func(&c1);
    func(&t1);
    func(&t2);
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

/*

PROPERTIES OF VIRTUAL FUNCTIONS
-   a base class pointer can be used to point to an object of a class derived from that base.
-   when a base pointer points a derived object that contains a virtual function, 
    the C++ determines which version of that function to call based on the type of 
    object pointed to by the pointer.
-   This is determined at runtime
-   when a virtual function is redefinded all aspects of the prototype must be same.
-   Virtual functions must be non static members
-   virtual functions can NOT be friends
-   constructor functions can NOT be virtual BUT destructors can be 

*/
   
