#include <iostream>
#include <cstring>


class student{
    private:
        std::string name;
        int roll, marks;
    public:
        static int scount;
        student(){
            scount++;
        }
        void set_name(std::string s) ;
        void set_roll(int x);
        void set_marks(int y);
        void display_data();
};

void student::set_marks(int x) {
    this->marks = x;
}

void student::set_roll(int x) {
    this->roll= x;
}

void student::set_name(std::string s) {
    this->name = s;
}

int student::scount;
void student::display_data(){
    std::cout << "Marks: " << marks <<"\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Roll No: " << roll << "\n";
    std::cout << "Total students: " <<scount <<"\n";
}



int main(){
    student a, b, c;
    
    
    a.set_roll(1); a.set_name("Hello"); a.set_marks(97);
    a.display_data();
    b.set_roll(1); b.set_name("Hello"); b.set_marks(97);
    // b.display_data();
    c.set_roll(1); c.set_name("Hello"); c.set_marks(97);

    
    // b.display_data();
    // c.display_data();
    return 0;
}