#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//its optimized approach :manachers algorithm : TC:o(n),,SC:o(1)
int getPalLength(string s,int i,int j){
    int n=s.size();
    while(i>=0 &&j<n&& s[i]==s[j]){
        i++;
        j--;
    }
    return j-i-1;
} 
int main() {
    string s="abcddcba";
    int n=s.size();
    int ans=1;
    for(int i=0;i<n;i++){
       int len1=getPalLength(s,i,i);
       int len2=getPalLength(s,i,i+1);
       ans=max(ans,max(len1,len2));
    }
    cout<<ans;
    
    return 0;
}