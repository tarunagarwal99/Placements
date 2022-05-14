#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={-2,3,4,-7,-5,-4,0,3,5,-17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]<0){
            start++;
        }
        else if(arr[end]>0){
            end--;
        }
        else {
            swap(arr[start],arr[end]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}