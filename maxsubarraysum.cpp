//find out maximum sum of subarray of size k

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int> arr={2,15,10,1,10,8};
    int n=arr.size();
    int sum=0;
    int win_s;
    
    int max=INT_MIN;
    int i=0;
    int j=0;
    cin>>win_s;
    if(win_s>n){
        cout<<"window size should be less than or equal to array size"<<endl;
        return 0;
    }

    while(i<(n-win_s+1)){
        while((j-i+1)<=win_s){
            sum=sum+arr[j];
            j++;
        }
        
        if(sum>max){
            max=sum;
        }
        // sum=max(sum,maxi);
        sum=sum+arr[j]-arr[i];
        j++; 
        i++;
        
    }
    cout<<"maximum sum :"<<max;
    return 0;
}