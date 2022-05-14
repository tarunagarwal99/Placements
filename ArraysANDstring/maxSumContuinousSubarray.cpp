#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr={-1,-2,-3,-4};
    int n=arr.size();
    int ans=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<ans;

    
    return 0;
}