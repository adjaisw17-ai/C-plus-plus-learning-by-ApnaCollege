#include <iostream>
using namespace std;

int main(){
    int age=25;
    char grade='a';
    float pi=3.14f;
    bool check=true;
    double price=100.99;
    cout << age<<"\t"<<grade<<"\t"<<pi<<"\t"<<check<<"\t"<<price;
    return 0;
}

// Primitive Data Types:-
// 1. int - 4 bytes(32 bits)
// 2. char - 1 byte(8 bits) - works on ASCII value(pytjon does not works on ASCII value)
// 3. float - 4 bytes(32 bits)
// 4. bool - 1 byte(8 bits) 
// 5. double - 8 bytes(64 bits) 

// A-Z -- 65-90
// a-z -- 97-122
// 0-9 -- 48-57

// true - 1
// false - 0
// 1 or 0 is printed when we print a bool value

// for float, we should write 3.14f or 3.14F
// if we don't write f, the compiler thinks that it is double value