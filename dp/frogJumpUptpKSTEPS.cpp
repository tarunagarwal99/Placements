//from can jump upto k steps in one go
//recursion code


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int idx,int k,vector<int> &work){
    int minsteps=INT_MAX;

    if(idx==0) return 0;
    for(int j=1;j<=k;j++){
        if((idx-j)>=0) {
           int jump =f(idx-j)+abs(work[idx]-work[idx-j]);
        }
        minsteps=min(minsteps,jump);
    }
    return minsteps;

}

int main() {
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int> work{30,10,40,20,60,30};
    cout<<f(n,k, work);
    
    return 0;
}