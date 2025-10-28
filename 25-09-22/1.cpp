//Strings
//string is null terminated array of characters \x00
//string class (class for string)

#include <iostream>
#include <string> 
using namespace std;

int main(){
    string str1="Shubhomoy";
    string str2("AND");
    string str3("Rajarshi");
    string str4; 
    str4 = str1;
    cout << str1<< " " <<str2 << " "<<str3 << " "<<str4 <<endl;
    str4 = str1 + str2 + str3;
    cout << str4 <<endl;
    str4 = str1 + " OR " + str3;
    cout << str4 <<endl;
    if(str3 < str1) cout << str3 +" < " + str1  <<endl;
}


/*
Op      Meaning
=       assignment
+       concatenation
+=      concatenation and assignment
==      equality 
!=      not equal 
<       less than  lexicographically
<=
>
>=

*/