#include <iostream>

using namespace std;

int SIZE = 10;

template <class ST> class stack {
    ST stack[SIZE];
    int top;
public:
    stack();
    void push(ST ob);
    ST pop();
};

template <class ST> void stack <ST>::push(ST ob){
    if(top == SIZE) {
        cout << "Stack FULL\n";
        return;
    }
    stack[top] = ob;
    top++;
}

template<class ST> ST stack<ST>::pop() {
    if(top == 0) {
        cout << "Stack empty\n";
        return 0;
    }
    top--;
    return stack[top];
}

int main(){
    
}