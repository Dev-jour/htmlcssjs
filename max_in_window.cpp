#include<bits/stdc++.h>
using namespace std;
//find maximum in each window of subarray in  array
int main(){
int arr[]={10,-5,8,-1,5,-2,-4,-3};
int size=sizeof(arr)/sizeof(int);
vector<int> rmax;
list<int> maxcount;
int i=0;
int j=0;
int win;
cout<<"enter window:";
cin>>win;
    while(j<size)
    {
        if(j-i+1<win){
            while((maxcount.size()>0)&&(maxcount.back()<arr[j]))
            {
                maxcount.pop_back();
            }
            maxcount.push_back(arr[j]);
            j++;
        }
        else if(j-i+1==win){
            while((maxcount.size()>0)&&(maxcount.back()<arr[j]))
            {
                maxcount.pop_back();
            }
            maxcount.push_back(arr[j]);

            rmax.push_back(maxcount.front());

            if(maxcount.front()==arr[i]){
                maxcount.pop_front();
            }
            i++;
            j++;
        }

    }

    for(auto it:rmax){
        cout<<it<<" ";
    }
return 0;
}