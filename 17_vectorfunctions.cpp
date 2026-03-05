#include <iostream>
#include <vector>
using namespace std;

// 1. vec.size() --> Returns the size of the vector(No. of elements stored in the vector vec)
// 2. vec.push_back(value)  --> Inserts the value give to the last of the vector vec...read how it works in notes copy
// 3. vec.pop_back()  --> To delete the last value in vector vec 
// 4. vec.front()  --> Returns the first(front) element in vec 
// 5. vec.back()  --> Returns the last(back) element in vec 
// 6. vec.at(index)  --> Returns the element at the specified index(Similar to vec[index])

// Read static and dynamic allocation from C++ notes copy 

int main(){
    vector<int> vec={10,20,30};

    cout<<"Original size = "<<vec.size()<<endl; // size()
    for(int val:vec){
        cout<<val<<" ";
    }cout<<endl;

    vec.push_back(40);  // push_back(value)
    cout<<"After push_back(), size = "<<vec.size()<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }cout<<endl;

    vec.pop_back();  // pop_back()
    cout<<"After pop_back(), size= "<<vec.size()<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }cout<<endl;

    cout<<"Front element = "<<vec.front()<<endl;  // front()
    cout<<"Back element = "<<vec.back()<<endl;  // back()

    cout<<"value at index 1 = "<<vec.at(1)<<endl;  // at(idx)

    return 0;
}