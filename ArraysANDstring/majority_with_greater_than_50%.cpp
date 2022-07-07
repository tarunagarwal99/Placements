#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//In every array only one element have freq>n/2;
int main() {
    vector<int> nums={1,3,3,3,4,2,5,3,7};
    int n=nums.size();
    int me=nums[0];
    int freq=1;
    for(int i=1;i<n;i++){
        if(nums[i]==me){
            freq++;
        }
        else{
            if(freq==0){
                me=nums[i];
                freq=1;
            }
            else{
                freq--;
            }
        }
    }
    int fre1=0;
    for(int i=0;i<n;i++){
        if(nums[i]==me){
            fre1++;
        }
    }
    if(fre1>n/2){
        cout<<me;
    }
    else{
        cout<<-1;
    }
    return 0;
}