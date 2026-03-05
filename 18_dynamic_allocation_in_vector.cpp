#include <iostream>
#include <vector>
using namespace std;

// Read static and dynamic allocation from C++ notes copy 

int main(){
    vector<int> vec;
    cout<<"Size = "<<vec.size()<<", Capacity = "<<vec.capacity()<<endl;
    
    vec.push_back(0);
    cout<<"Size = "<<vec.size()<<", Capacity = "<<vec.capacity()<<endl;

    vec.push_back(1);
    cout<<"Size = "<<vec.size()<<", Capacity = "<<vec.capacity()<<endl;

    vec.push_back(2);
    cout<<"Size = "<<vec.size()<<", Capacity = "<<vec.capacity()<<endl;

    vec.push_back(3);
    cout<<"Size = "<<vec.size()<<", Capacity = "<<vec.capacity()<<endl;

    vec.push_back(4);
    cout<<"Size = "<<vec.size()<<", Capacity = "<<vec.capacity()<<endl;

    return 0;
}