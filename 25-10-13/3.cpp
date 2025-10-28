#include <iostream>
using namespace std;
int SIZE=10;
template <class T> class sarray{
    T arr[SIZE];
    public:
        sarray(){
            int T;
            for(i = 0; i < SIZE, i++) {
                arr[i] = i;
            }
        }

        T& operator[](int i);
};

template <class T> T& sarray <T>::operator[](int i) {
    if(i < 0 || i > SIZE -1) {
        cout << "Index " << i << " out of bound";
        exit(1);
    }
    return arr[i];
}

int main(){
    //write it in the obsidian 
    //2.cpp will be taught tommorrow 
    return 0;
}