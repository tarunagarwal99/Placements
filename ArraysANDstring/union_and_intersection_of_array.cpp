#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   vector<int> arr={1,2,3,4,5};
  vector<int> arr1={2,6,7};
  unordered_map<int> ans;
  int n=arr.size();
  int m=arr1.size();
  for(int i=0;i<n;i++){
      ans.insert(arr[i]);
  }
   for(int i=0;i<n;i++){
      ans.insert(arr1[i]);
  }
  cout<<ans.size();
   
    return 0;
}