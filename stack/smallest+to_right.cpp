#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    vector<int> given={6,2,5,4,5,1,6};
    int n=given.size();
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 &&st.top()>=given[i]){
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