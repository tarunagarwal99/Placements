//from can jump upto k steps in one go
//recursion code

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int idx,int k,vector<int> &work,vector<int> &dp){
    int minsteps=INT_MAX;
    int jump;

    if(idx==0) return 0;
    if(dp[idx]!=-1){
        return dp[idx];
    }
    for(int j=1;j<=k;j++){
        if((idx-j)>=0) {
           jump =f(idx-j,k,work,dp)+abs(work[idx]-work[idx-j]);
        }
        minsteps=min(minsteps,jump);
    }
    return dp[idx]=minsteps;

}

int main() {
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    vector<int> work{30,10,40,20,60,30};
    cout<<f(n-1,k, work,dp);
    
    return 0;
}