#include <iostream>
using namespace std;

//int marks[size];

int main(){
    int marks[]={99,100,50,12,30};
    cout<<sizeof(marks)<<endl;  // this function gives the total memory occupied by marks=20 Bytes (size of int =4 Bytes)
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}