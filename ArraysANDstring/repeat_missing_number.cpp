#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums={1,3,2,3,5,7,6};
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        ans=ans^(i+1)^nums[i];
    }
    int setBit=ans&~(ans-1);  // to find what is the last bit in the ans
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(setBit&nums[i]){
            l=l^nums[i];
        }
        else{
            r=r^nums[i];
        }
    }
    for(int i=0;i<n;i++){
        if(setBit&(i+1)){
            l=l^(i+1);
        }
        else{
            r=r^(i+1);
        }
    }
    cout<<l<<" "<<r;
    return 0;
}