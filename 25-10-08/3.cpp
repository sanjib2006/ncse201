//Overloading << operator

#include <iostream>
using namespace std;

class date{
    int da, mo, yr;
    public:
        date(int d, int m, int y){
            da = d;
            mo = m;
            yr = y;
        }

    friend ostream& operator<<(ostream &os, date dt) ;
};

ostream& operator<<(ostream &os, date dt) {
    os<<dt.da<<"/"<<dt.mo<<"/"<<dt.yr;
    return os;
}

int main() {
    date dt(8, 10, 2025);
    cout << dt;
}