#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr={1,2,3,4,3,2,1,4,5,6,6,7};
    int n=arr.size();
    unordered_map<int,int> mp;  //mp.find will give us a pointer
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()){
            mp[arr[i]]++;
        }
        else{
            mp.insert({arr[i],1});
        }
    }
        
      unordered_map<int,int>::iterator it; 
    for( it=mp.begin();it!=mp.end();it++){
            // cout<<it->first<<" "<<it->second<<endl;
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
    
  unordered_set<int> st;
    for(int i=0;i<n;i++){
        if(mp[C[i]]==B){

        }
    }
    
    return 0;
}