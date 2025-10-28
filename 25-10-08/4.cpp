//Overloading >> operator

#include <iostream>
using namespace std;

class date{
    public:
    int da, mo, yr;
    
        date(){}
        date(int d, int m, int y){
            da = d;
            mo = m;
            yr = y;
        }

    friend istream& operator>>(istream &is, date &dt) ;
    friend ostream& operator<<(ostream &os, date dt) ;
};

ostream& operator<<(ostream &os, date dt) {
    os<<dt.da<<"/"<<dt.mo<<"/"<<dt.yr;
    return os;
}

istream& operator>>(istream &is, date dt) {
    is>>dt.da>>dt.mo>>dt.yr;
    return is;
}

int main() {
    date dt(8, 10, 2025);
    cout << dt <<endl;
    date newdt;
    cin >> newdt;
    cout <<newdt <<endl;
}