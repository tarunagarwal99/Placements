#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if((n&1)==1){
            count++;
        }
        n=n/2;
    }
    cout<<count;
    return 0;
}