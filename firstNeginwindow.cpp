
// First Negative Number in every Window of Size K | Sliding Window

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={12,-1,-7,8,15,30,16,28};
    int n=arr.size();
    
    int win_s;
    cin>>win_s;

     // /*1.NAIVE APPROACH*/
    // int i=0;
   
    // int j=win_s-1;
    // vector<int> rvec;
   
    // while(j<n){
    //     bool val=false;
    //     for(int k=i;k<=j;k++){
    //         if(arr[k]<0){
    //             rvec.push_back(arr[k]);
    //             val=true;
    //             break;
    //         }
    //     }
    //     if (!val) {
    //         rvec.push_back(0);
    //     }
    //     i++;
    //     j++;
    // }
    // for(auto it:rvec){
    //     cout<<it<<" ";
    // }
    
    

    /*2.OPTIMISED APPROACH*/

    int i=0;
    int j=0;
    queue<int> ls;
    vector<int> rvec;

    while(j<n){
        if(j-i+1<win_s){
            if(arr[j]<0){
                ls.push(arr[j]);
            }
            j++;
        }
        else if(j-i+1==win_s){

            if(arr[j]<0){
                ls.push(arr[j]);
            }/*check if current j value element whether negative or not*/

            if(ls.empty()){
                //either print 0 or push_back 0 into the vector
                rvec.push_back(0);

            }
            else{

                rvec.push_back(ls.front());
                
                if(arr[i]==ls.front()){
                    ls.pop();
                }
                
                
            }
                j++;
                i++;
        }//else if end
    }//while end 
    
    /*to print the elements which are present in vector*/
    for(auto it:rvec){
        cout<<it<<" ";
    }

//optimise approach 2(coding ninja)
// vector<int> firstNegative(vector<int> arr, int n, int k) {
// 	 int firstNegativeIndex = 0;
//     int firstNegativeElement;
//     vector<int> vrec;
//     for (int i = k - 1; i < n; i++) {
 
//         // skip out of window and positive elements
//         while ((firstNegativeIndex < i)
//                && (firstNegativeIndex <= i - k
//                    || arr[firstNegativeIndex] >= 0)) {
//             firstNegativeIndex++;
//         }
 
//         // check if a negative element is found, otherwise
//         // use 0
//         if (arr[firstNegativeIndex] < 0) {
        
//             vrec.push_back(arr[firstNegativeIndex]);
//         }
//         else {
//             vrec.push_back(0);
//         }
        
//     }
//     return vrec;
// }

   
    return 0;

   
}