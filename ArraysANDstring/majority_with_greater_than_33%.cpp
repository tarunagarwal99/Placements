#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//In every array atmost 2 element having freq>n/3;
int main() {
    vector<int> nums={1,3,3,3,2,2,2,1};
    int n=nums.size();
    int freq1=1;
    int freq2=1;
    int me1=-1;
    int me2=-1;
    for(int i=1;i<n;i++){
        if(nums[i]==me1){
            freq1++;
        }
        else if(nums[i]==me2){
            freq2++;
        }
        else{
            if(freq1==0){
                me1=nums[i];
                freq1=1;
            }
            else{
                freq1--;
            }
            if(freq2==0){
                me2=nums[i];
                freq2=1;
            }
            else{
                freq2--;
            }
        }
        int fre1=0,fre2=0;
        for(int i=0;i<n;i++){
           if(me1==nums[i]){
            fre1++;
           }    
             
        }
        if(fre1>n/3){
            cout<<me1;
        }
        else{
            cout<<-1;
        }
        for(int i=0;i<n;i++){
           if(me2==nums[i]){
            fre2++;
           }    
             
        }
       if(fre2>n/3){
            cout<<me2;
        }
        else{
            cout<<-1;
        }
    }


    return 0;
}