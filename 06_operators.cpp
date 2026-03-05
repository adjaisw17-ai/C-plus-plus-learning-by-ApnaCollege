#include <iostream>
using namespace std;

int main(){
    // Assignment operators
    int a=10,b=5;
    cout<<"sum = "<<(a+b)<<endl; //15
    cout<<"difference = "<<(a-b)<<endl; //5
    cout<<"product = "<<(a*b)<<endl;  //50
    cout<<"division = "<<(a/b)<<endl;  //2
    cout<<"modulo = "<<(a%b)<<endl;  //0

    //concept:
    int x=5,y=2;
    cout<<(x/y)<<endl; // answer=2
    cout<<(x/(float)y)<<endl; // answer=2.5
    cout<<((double)x/y)<<endl; // answer=2.5

    // Relational Operators
    cout << (3<5) <<endl; //true -> 1
    cout << (3>5) <<endl; //false -> 0
    cout << (3<=3) <<endl; //true -> 1
    cout << (3!=3) <<endl; //false -> 0
    cout << (3==3) <<endl; //true -> 1

    // Logical Operators
    cout << ((3<1)||(3<5))<<endl; //true 1
    cout << ((3<1)&&(3<5))<<endl; //false 0
    cout << !(3<5)<<endl; //false 0

    //Unary increment(++) and decrement(--) same as java
    return 0;
}