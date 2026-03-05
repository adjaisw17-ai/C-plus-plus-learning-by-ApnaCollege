#include <iostream>

#include <vector>  // Important

using namespace std;

// vector<type> vec;    This is how to declare a vector

int main(){
    // vector<int> vec; // Now it's size is 0 --->Method 1
    // vector<int> vec={1,2,3};  --->Method 2
    // vector<int> vec(size,value at each index)  --->Method 3

    vector<int> vec1={1,2,3};
    cout<<vec1[0]<<endl; // 1

    vector<int> vec2(3,2);
    for(int i=0;i<3;i++){
        cout<<vec2[i]<<" ";
    }cout<<endl;

    // for each loop in vector --> It access the elements stored in the vector
    for(int val:vec1){
        cout<<val<<" ";
    }cout<<endl;
    
    vector<char>vec3={'a','b','c','d'};
    for(char val:vec3){
        cout<<val<<" ";
    }cout<<endl;
    
    return 0;
}

// 1. Vector is like an array but its size can be increased
