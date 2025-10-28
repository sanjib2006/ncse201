//overloading the + and * operator to add or multiply two complex numbers


#include <iostream>
using namespace std;

class complex {
    double real, imag;
    public:
        complex(){}
        complex(double i) {
            real = i;
            imag = 0;
        }
        complex(double i , double j) {
            real = i;
            imag = j;
        }
        void show() {
            cout << real;
            if(imag == 0) {
                cout << endl;
            } else cout <<" + " << imag << "i\n";
        }
        complex operator+(complex c2) {
            complex temp;
            temp.real = real + c2.real;
            temp.imag = imag + c2.imag;
            return temp;
        }
        complex operator*(complex c2) {
            complex temp;
            temp.real = real * c2.real - imag * c2.imag;
            temp.imag = real * c2.imag + imag*c2.real;
            return temp;
        }
};

int main(){
    complex c1(10.5), c2(11.76, 23.94);
    cout << "c1: "; c1.show();
    cout << "c2: ";c2.show();
    cout << "c1 = c1 + c2\n"; c1 = c1 + c2;
    
    cout << "c1: "; c1.show();
    c1 = c1*c2;
    cout << "c1 * c2: ";c1.show();
    return 0;

}

//notes 
/*
- opeartor+() has only one operant
- operand on the left handside of the + is implicitly passed 
  to the function through the this pointer 
- the object on the left of the operator generates 
  the call to the operator function 
- in most of the cases the operator function returns an object 
  of the class it operates on
- this allows to operator to be used in larger expression
*/