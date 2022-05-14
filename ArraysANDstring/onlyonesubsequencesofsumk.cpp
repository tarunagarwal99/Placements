#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool printS(int idx,vector<int> &ans,int s,int sum,int arr[],int n){
    if(idx == n){
        //condition satified
        if(s == sum){
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        //condition not satisfied
         return false;
    }
     //for picking up the element
    ans.push_back(arr[idx]);
    s+=arr[idx];
    if(printS(idx+1,ans,s,sum,arr,n)==true){
        return true;
    };
    s-=arr[idx];
    ans.pop_back();
    //for not picking up the element
    if(printS(idx+1,ans,s,sum,arr,n)==true){
        return true;
    }
    return false;
}

int main() {
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ans;
    printS(0,ans,0,sum,arr,n);
    return 0;
}