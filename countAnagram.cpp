//count occurrences of anagram
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str_in;
    cout<<"enter the input string"<<endl;
    cin>>str_in;

    string str_ptr;
     cout<<"enter the pattern string"<<endl;
    cin>>str_ptr;

   
    vector<int> rvec;
    int i_size=str_in.size();
    int p_win=str_ptr.size();
    int j=0;
    int i=0;
    int win_v=0;
    //window value of pattern
    int win_pv=0;
    for(int k=0;k<p_win;k++){
        win_pv=win_pv+str_ptr[k]-'a';
    }
    // matching windowvalue of pattern with each substring of input string
    while(j<i_size){
        //if window size has not attended
        //then calculate window value till window is attended
        if(j-i+1<p_win){

            win_v=win_v+str_in[j]-'a';
            j++;
        }
        //else if window size is attended
        // then compare the windowvalue of input substring and window value of pattern
        else if(j-i+1==p_win){
            win_v=win_v+str_in[j]-'a';
            if(win_v==win_pv){
                rvec.push_back(i);
            }
            win_v=win_v-(str_in[i]-'a');
            i++;
            j++;
        }
    }
    cout<<"occurences found at:"<<endl;
    for(auto it:rvec){
        cout<<it<<" ";
    }
  
return 0;

}