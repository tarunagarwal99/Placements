#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//actually the given araay is sorted infinite binary array
//means that array has only 0 and 1 element in it but the array is infinite
//and we have to find out the first occurance of 1 
int bs(vector<int> &arr,int start,int end){
    int first_occurance=-1;
    int val=1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==val){
            first_occurance=mid;
            end=mid-1;
        }
        else if(arr[mid]<val){
             start=mid+1;            
        }
        else{
            end=mid-1;
        }
    }
    return first_occurance;
}
int main() {
   vector<int> arr={0,0,0,0,0,0,0,0,0,1,1,1 };
    int n=arr.size();
    int start=0;
    int end=1;
    int val=1;
    while(val>arr[end]){
        start=end;
        end=end*2;
    }
   cout<< bs(arr,start,end);
    return 0;
}