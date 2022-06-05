#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string str="100011";
    int n=str.size();
   
    vector<int> ans;
        
    vector<int> res[n];
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
         res[i]=-1;
        }
        else{
        res[i]=1;
      }
    }
     int start=0,end=0;
     int sum=0;
     int ans1=INT_MIN;
    for(int i=0;i<n;i++){
      sum+=res[i];
      if(ans1<sum){
          ans1=sum;
       
          end=i;
          ans.push_back(start+1);
          ans.push_back(end+1);
      }
      if(sum<0) {
          sum=0;
          start=i+1;
      }
    }
   for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" "<<endl;
   }
    return 0;
}