//Operator Overloading
/*
- Closely related with function overloading
- Most of the operators can be overloaded to perform special operations 
- You overload operator by creating operator functions 
- An operator funciton is created using operator keyword 
- 
General Syntax for Operator Overloading:
inside class 
    classname operator<operator you want to overload eg "+ ">(classname c2){
        classname temp;
        temp.x1 = x1 + c2.x1;
    }
outside class 
    classname classname::operator<operator you want to overload eg +>(classname c2){
        classname temp;
        temp.x1 = x1 + c2.x1;
    }

*/

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
            cout << longitude <<" " << latitude << endl;
        }
        loc operator+(loc op2) {
            loc temp;
            temp.longitude = op2.longitude + longitude;
            temp.latitude = op2.latitude + latitude;
            return temp;
        }   

};


int main(){
    loc ob1(10, 20), ob2(5, 30);
    ob1.show(); 
    ob2.show();
    ob1 = ob1 + ob2;
    ob1.show();
    
    (ob1 + ob2).show();
    return 0;
}