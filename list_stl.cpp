#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> ls;
    //push_front() push_back() pop_front() pop_back() 
    //begin() end() rbegin() rend()
    //size() clear() at() empty()
    //remove() works in O(1)

    ls.push_back(3);
    ls.push_back(1);
    ls.push_back(10);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(5);
    cout<<"elements in the list:"<<endl;
    for(auto it:ls){
        cout<<(it)<<" ";
    }
    ls.remove(2);
    cout<<""<<endl;
    cout<<"elements in the list after remove:"<<endl;
    for(auto it:ls){
        cout<<(it)<<" ";
    }
     
    return 0;
}