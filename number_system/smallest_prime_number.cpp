#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> spf(n+1);
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=2*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    for(int i=0;i<=30;i++){
        cout<<spf[i]<<" ";
    }
   
    return 0;
}