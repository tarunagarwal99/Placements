#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> st;
    vector<int> arr1={1, 2, 2, 1};
    vector<int> arr2={3, 2, 1, 2};
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                st.insert(arr1[i]);
            }
        }

    }
    unordered_set<int>::iterator it;  //it is the position operator
    for(it=st.begin();it!=st.end();it++){
       cout<<(*it)<<" ";
    }
43
    return 0;
}