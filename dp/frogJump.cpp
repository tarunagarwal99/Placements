//here frog can only jump 1 steps or max to max 2 steps

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int idx,vector<int> &energy){
    int left,right=INT_MAX;
    if(idx==0){
        return 0;
    } 
    left=fun(idx-1,energy)+abs(energy[idx]-energy[idx-1]);
    if(idx>1){
       right=fun(idx-2,energy)+abs(energy[idx]-energy[idx-2]);
    }
    int ans=min(left,right);
    return ans ;
}

int main() {
    int  n;
    cin>>n;
    vector<int> energy{30,10,60,10,60,50};
    cout<<fun(n-1,energy);
    return 0;
}