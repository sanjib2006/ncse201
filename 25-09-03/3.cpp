#include <iostream>

using namespace std;

//this scenario is called function overwriting
//ocurrs with  inheritence
class base{
    public: 
        void show(){
            cout << "Showing base class.\n";
        }

};

class derived: public base{
    public:
        void show(){
            cout << "Showing derived class.\n";
        }
};

int main(){
    derived obj;//new 
    //old derived derived obj = derived();
    obj.show();
    base obj2;
    obj2.show();
    return 0;

    //output
    //Showing derived class.
    // Showing base class.

}

//incase of overloading : definitions are disambiguated by their scopes
//function overriding is an example of runtime polymorphism 