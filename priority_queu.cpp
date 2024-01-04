#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> pq;
cout<<"priority maximum queue execution"<<endl;

pq.push(9);
pq.push(7);
pq.push(18);
pq.push(10);
pq.push(11);

while(!pq.empty()){
    cout<<pq.top()<<endl;
    pq.pop();
}
//priority queue:10(top)->9->8->7
// cout<<pq.top();//print 10
// pq.pop();
// cout<<pq.top();//print 9

//mininum priority queue using maximum priority queue

priority_queue<int> mpq;
cout<<"priority mininum using maximum queue execution"<<endl;
mpq.push(-1);
mpq.push(-6);
mpq.push(-8);
cout<<-1*mpq.top()<<endl;
mpq.pop();
cout<<-1*mpq.top()<<endl;
mpq.pop();
cout<<-1*mpq.top()<<endl;


priority_queue< pair<int, int>> ppq;
cout<<"priority queue execution"<<endl;
ppq.push({1,3});
ppq.push({2,10});
ppq.push({4,8});
pair<int,int> element=ppq.top();
cout<<element.first<<" "<<element.second<<endl;
//in priority queue duplicates are allowed

priority_queue< int, vector<int>,greater<int>> minipq;
cout<<"minimum priority execution"<<endl;
minipq.push(9);
minipq.push(7);
minipq.push(9);
minipq.push(10);

while(!minipq.empty()){
    cout<<minipq.top()<<endl;
    minipq.pop();
}
return 0;
}