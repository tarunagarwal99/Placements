#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int A[]={1,-1,3,4,5};
    int n = sizeof(A) / sizeof(A[0]);
    int minNo=INT_MAX; 
    int maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        minNo=min(A[i],minNo);
        maxNo=max(A[i],maxNo);
    }
    cout<<minNo<<" "<<maxNo;  
    return 0;
}