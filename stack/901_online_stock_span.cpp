#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> given={100,80,60,70,60,75,85};
    int n=given.size();
    vector<int> index(n);
    vector<int> ans(n);
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++){
        while(st.size()>0 && st.top().first<=given[i]){
            st.pop();
        }
        index[i]=st.size()>0?st.top().second:-1;
        st.push({given[i],i});
    }
    for(int i=0;i<n;i++){
        cout<<index[i]<<" ";
    }
    cout<<endl;
    // for(int i=0;i<n;i++){

    // }
    stack<int> st1;
      for(int i=0;i<n;i++){
        while(st1.size()>0 && st1.top()<=given[i]){
            st1.pop();
        }
        ans[i]=st1.size()>0?st1.top():-1;
        st1.push(given[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
     cout<<endl;
    // for(int i=0;i<n;i++){

    // }
    for(int i=0;i<n;i++){
        index[i]=i-index[i];
    }
    for(int i=0;i<n;i++){
        cout<<index[i]<<" ";
    }
    
    return 0;
}