// arr1[]={11, 1, 13, 21, 3, 7}
// arr2[]={11,3,7,1};
// here we have to check whether arr2[] is the subset of array or not.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int  arr1[]={11, 1, 13, 21, 3, 7};
  int  arr2[]={11,3,7,1};
  int n=6; //size of arr1
  int m=4;   //size of arr2
  unordered_set<int> st;
  for(int i=0;i<n;i++){
    if(st.find(arr1[i])==st.end()){
    st.insert(arr1[i]);
  }
}
for(int i=0;i<m;i++){
  if(st.find(arr2[i])!=st.end()){
    st.erase(arr2[i]);
  }
}
// if(st.empty()){
//   cout<<1;
// }
// else{
//   cout<<0;
//   }
    return 0;
}