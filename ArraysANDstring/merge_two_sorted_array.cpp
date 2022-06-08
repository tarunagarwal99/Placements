#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//here we use two pointer approach
int main() {
    vector<int> arr1={1,2,5,7};
    vector<int> arr2={2,3,4,8,9};
    int n=arr1.size();
    int m=arr2.size();
    vector<int> ans(n+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
         ans[k]=arr1[i];
         i++;
         k++;
    }
    while(j<m){
        ans[k]=arr2[j];
        j++;
        k++;
    }
    for(int x=0;x<ans.size();x++){
        cout<<ans[x]<<" ";
    }
    return 0;
}