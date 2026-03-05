#include <iostream>
using namespace std;

int main(){
    int age;
    cout<< age <<endl; //now this will randomly print any value...means automatic intialisation to 0 does not work in c++

    // Input
    cout<<"Enter the age : ";
    cin >> age;
    cout<<"Your age is : "<<age;
    return 0;
}