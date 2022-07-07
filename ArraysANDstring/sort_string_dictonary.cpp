#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     string s="dabcdbedbacbdzpzpomn";
     vector<int> count(26,0);
     for(int i=0;i<26;i++){
        int index=s[i]-'a';
        count[index]++;
     }
     for(int i=0;i<count.size();i++){
        cout<<count[i];
     }
     cout<<endl;
     string str="";
     int k=0;
     for(int i=0;i<26;i++){
        for(int j=0;j<count[i];j++){
          str+=(i+'a');
        
        }
     }
     cout<<str;
    return 0;
}