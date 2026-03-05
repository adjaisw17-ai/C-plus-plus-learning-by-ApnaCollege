#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;

    if(marks>=90){
        cout<<"A\n";
    }else if(marks>=80 && marks<90){
        cout<<"B\n";
    }else{
        cout<<"C\n";
    }

    // Example to check whether an input char is lowercase or uppercase
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"Lowercase\n";
    }else if(ch>='A'&&ch<='Z'){
        cout<<"Uppercase\n";
    }else{
        cout<<"None\n";
    }
    return 0;
}