#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={2,1,0,2,0,0,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,mid=0,end=n-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}