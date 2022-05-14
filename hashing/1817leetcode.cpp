#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     vector<vector<int>>   logs{{1,1},{2,2},{2,3}};
     unordered_map<int,unordered_set<int>> mp1;
     int n=logs.size();
     for(int i=0;i<n;i++){
       
         mp1.insert({logs[i][0],logs[i][1]});
         

     }
    //  unordered_map<int,unordered_set<int>>::iterator it;
    //  for(it=mp1.begin();it!=mp1.end();it++){
    //      cout<<it->first<<" "<<it->second;
    //      cout<<endl;
    //  }
    for(auto it:mp1){
        cout<<it;
        cout<<endl;
    }
    return 0;
}