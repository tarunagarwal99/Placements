#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int printS(int idx,int s,int sum,int arr[],int n){
   int l,r;
    if(idx == n){
        if(s == sum){
           return 1;
    }
   
     return 0 ;
}
     //for picking up the element
    
    s+=arr[idx];
     l=printS(idx+1,s,sum,arr,n);
    s-=arr[idx];
  
    //for not picking up the element
    r=printS(idx+1,s,sum,arr,n);
    return l+r;
}

int main() {
    int arr[]={1,2,1};
    int n=3;
    int sum=2;

    cout<<printS(0,0,sum,arr,n);
    return 0;
}