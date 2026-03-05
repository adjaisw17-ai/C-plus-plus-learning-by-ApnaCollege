#include <iostream>
using namespace std;

int main(){
    int count=1;
    while(count<=5){
        cout<<count<<endl;
        count++;
    }

    for(int i=1;i<=4;i++){
        cout<<i<<endl;
    }
    //count=6
    do{
        cout<<count;
    }while(count<=5);
    return 0;
}