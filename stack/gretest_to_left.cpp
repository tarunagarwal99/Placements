#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> given={1,3,2,4};
    int n=given.size();
    vector<int> ans(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.size()>0 && st.top()<=given[i]){
            st.pop();
        }
        ans[i]=st.size()>0?st.top():-1;
        st.push(given[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}