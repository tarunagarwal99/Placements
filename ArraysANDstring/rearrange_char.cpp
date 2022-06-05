#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     string s="ilovecodingonleetcode";
    int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
            }
            else{
                mp.insert({s[i],1});
            }
        }
        unordered_map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
        string  target = "code";
        int m=target.size();
        for(int i=0;i<n;i++){
            
        }

    return 0;
}