#include<iostream>
#include<bits/stdc++.h>
#include<regex>
using namespace std;



int main() {
    vector<int> arr={30,10,40,60,9,70,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin>>k;
    // this method has o(nlogn) time complexity
    sort(arr.begin(),arr.end());
    cout<<arr[k-1]; //kth smalllest number
    cout<<endl;
    cout<<arr[n-k+1];   //kth largest number

    
    return 0;
}