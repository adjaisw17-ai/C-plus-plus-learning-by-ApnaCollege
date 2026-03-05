#include <iostream>
using namespace std;

void reverseArray(int a[],int s){
    // Using two pointer method
    int start=0,end=s-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;end--;
    }
}
// swap(var1,var2)  is a function is c++ which swaps the value of var1 and var2

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}