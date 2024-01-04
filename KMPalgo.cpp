#include<bits/stdc++.h>
using namespace std;

void CalLPS(int *lps, char *pat,int plen){
    int i=0;
    int j=1;

    lps[0]=0;
    while(j<plen){
        if(pat[i]==pat[j]){
            lps[j]=i+1;
            i++;
            j++;
        }
        else//if(pat[i]!=pat[j])
        {
            if(i!=0){
                i=lps[i-1];
            }
            else{
                j++;
            }
            
        }
    }

}

void findptr(char *text , char *pat){
    int LPS[]={0};
   
    int tlen=strlen(text);
    int plen=strlen(pat);
     CalLPS(LPS, pat,plen);
    for(auto it:LPS)        
    {
        cout<<it;
    }
    int i=0,j=0;

    //compare both pat and text
    while(i<tlen){
        if(text[i]==pat[j]){
            i++;
            j++;
        }
        if(j==plen){
            cout<<"patern has found at:"<<i-j;
            j=LPS[j-1];

        }
        else if(i<tlen && text[i]!=pat[j]){
            if(j!=0){
                j=LPS[j-1];
            }
            else{
                i++;
            }

        }
    }


}

int main(){
    
    char txt[] ="AAAAABAAABA";
    char ptr[] ="AAAA";
    findptr(txt,ptr);
    return 0;
}