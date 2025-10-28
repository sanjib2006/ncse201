// Function returning a reference

#include <iostream>

using namespace std;

float val[] = {10.1, 12.6, 33.1, 24.1, 50,0};
float & setval(int i){
    return val[i];
}

int main() {
    for(int i = 0; i < 5; i++) {
        cout << val[i] << " ";
    } cout << "\n";
    setval(1) = 20.7;
    setval(3) = 100.0;

    for(int i = 0; i < 5; i++) {
        cout << val[i] << " ";
    } cout << "\n";

}