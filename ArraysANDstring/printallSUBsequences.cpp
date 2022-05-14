#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printF(int idx,vector<int> &ans,int arr[],int n){
    if(idx==n){
        for(auto it:ans){
            cout<<it<<" ";
        }
        if(ans.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }
    ans.push_back(arr[idx]);  //take
    printF(idx+1,ans,arr,n);
    ans.pop_back();           //not take
    printF(idx+1,ans,arr,n); 
}

int main() {
    int arr[]={3,1,2,4};
    int n=4;
    vector<int> ans;
    printF(0,ans,arr,n);
    return 0;
}