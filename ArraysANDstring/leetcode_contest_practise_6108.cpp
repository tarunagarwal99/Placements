#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string  key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv";
    // unordered_map<char,char> mp;
        string s="abcdefghijklmnopqrstuvwxyz";
        set<char> st;
        for(int i=0;i<key.size();i++){
            if(s[i]!=' '){
            st.insert(key[i]);
            }
        }
        set<char>::iterator it;
        for(it=st.begin();it!=st.end();it++){
            cout<<*it<<endl;
        }
        // for(int i=0;i<key.size();i++){
        //     if(key[i]!=' ')
        //     mp.insert({key[i],s[i]});
        // }
        // unordered_map<char,char>::iterator it;
        // for(it=mp.begin();it!=mp.end();it++){
        //     cout<<it->first<<" "<<it->second<<endl;

        // } 

    return 0;
}