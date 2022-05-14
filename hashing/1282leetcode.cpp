#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> groupSizes{3,2,2,3,3,1,3};
   
     int n=groupSizes.size();
     unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp.insert({groupSizes[i],i});
        }

      unordered_map<int,int>::iterator it;
      for(it=mp.begin();it!=mp.end();it++){
          cout<<it->first<< " "<<it->second;
          cout<<endl;
      }  
      int max=*max_element(groupSizes.begin(),groupSizes.end());
      cout<<max;
    return 0;
}