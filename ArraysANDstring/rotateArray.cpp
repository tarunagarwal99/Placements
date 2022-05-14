#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseTheArray(vector<int>& arr,int left,int right){
        while(left<right){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        // return arr;
    }


int main() {
    vector<int> ans={1,2,3,4,5,6,7};
    int k;
    cin>>k;
     int n=ans.size();
        if(k>n){
            k=k%n;
        }
        reverseTheArray(ans,0,n-k-1);
        reverseTheArray(ans,n-k,n-1);
        reverseTheArray(ans,0,n-1);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        
    
    return 0;
}