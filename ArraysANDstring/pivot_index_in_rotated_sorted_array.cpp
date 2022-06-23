#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//we have given rotated sorted array and we have to find its pivot index
int main() {
       vector<int> A=0,{3,4,5,0,1,2};
       int n=A.size();
       int l=0,r=n-1;
       int pivot=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(A[mid]>=A[0]){
                l=mid+1;   //means we have to move to right part of the array,
            }
            else if(A[mid]<A[0]){
                pivot=mid;
                r=mid-1;
            }
        }
        cout<<pivot;
    return 0;
}