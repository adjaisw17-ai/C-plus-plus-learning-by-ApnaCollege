#include <iostream>
using namespace std;

int main(){
    //Implicit type conversion
    char grade='a';
    int value=grade;// value=97
    cout<<value<<endl;

    //Explicit type conversion
    double price=100.99;
    int newPrice=(int)price; //100
    cout<<newPrice<<endl;
    return 0;
}

// when we explicitly covert double or float value in int,
// it acts as floor function
// it does not round off it
// it just takes the integral part