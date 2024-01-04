#include<bits/stdc++.h>
using namespace std;

int main(){
    // string str;
    // cout<<"enter the string:"<<endl;
    // getline(cin,str);
    // // cin>>str;
    // cout<<str;
    // return 0;
   
    vector<int> rvec;
    vector<int> nums = {4,3,2,7,8,2,3,1,4,8};
    map<int,int> mp;
    if(nums.size()==1 || nums.size()==0){
        cout<<"vector size should be greater than 0 or 1";
        return 0;
    }

    for(int i=0;i<nums.size();i++){
        
        mp[nums[i]]++;
        
    }

    for(auto it:mp){
        if(it.second>0){
            rvec.push_back(it.first);
            it.second=0;
        }
    }

    for(auto it:rvec){
        cout<<it<<" ";
    }
        return 0;
}