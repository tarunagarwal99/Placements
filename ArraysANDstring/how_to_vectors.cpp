#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5,20);
    for(auto it:v){
        cout<<it<<" ";
    }
    v.push_back(1);
    cout<<v.size();
    return 0;
}