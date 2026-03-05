#include <iostream>
using namespace std;

// In C++, a reference is an alternative name for an object or function,
// and its address is the address of the object or function it refers to.
// For sake of understanding, we are calling it address here.

void changearr(int ar[],int size){
    for(int i=0;i<size;i++){
        ar[i]=2*ar[i];
    }
    // when arr[] is passed to ar[],changes in ar is actually done directly to arr[]
    // then ar[] points to the same address of arr[]
    // this is pass by reference
}

int main(){
    int arr[]={1,2,3};
    cout<<"in main\n";
    for(int i =0;i<3;i++){
        cout<<arr[i]<<endl;
    } 
    changearr(arr,3); //pass by reference
    cout<<"in function\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}