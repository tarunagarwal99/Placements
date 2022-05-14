#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    unordered_set<int> st;
    vector<int> prime_factors;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            prime_factors.push_back(i);
            st.insert(i);
            n=n/i;
        }
    }
    if(n>1){
        prime_factors.push_back(n);
        st.insert(n);
    }
    for(int prime:prime_factors){
        cout<<prime<<" ";
    }
    cout<<endl;
    unordered_set<int>::iterator it;
    for(it=st.begin();it!=st.end();it++){
        cout<<(*it)<<" ";
        }
        cout<<endl;
        cout<<st.size();
    return 0;
}