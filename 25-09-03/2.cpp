#include <iostream>

using namespace std;

void greet(string name = "Guest", int age = 0) {
    cout << "Hello " << name << ". You are " << age << " years old.\n";
}

int main() {
    greet();
    greet("IIT ISM");
    greet("IIT ISM", 100);

}