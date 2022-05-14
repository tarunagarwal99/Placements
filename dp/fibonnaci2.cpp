//tabulation method of fibonacci series
//tc:o(n) and sc:o(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++){
        int ans=prev+prev2;
        prev2=prev;
        prev=ans;
    }
    cout<<prev;
    
    
    return 0;
}