#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            count++;
        }
    }
    return count+1;
}

int main() {
    vector<string> messages={"Hello userTwooo","Hi userThree","Wonderful day Alice","Nice day userThree"};
    vector<string> senders = {"Alice","userTwo","userThree","Alice"};
    int n=senders.size();
     vector<pair<string,int>> v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(senders[i],count(messages[i])));
        }
        for(int i=0;i<n;i++){
           cout<<v.at(i).first<<" "<<v.at(i).second<<endl;
        }
        vector<pair<string,int>> v1;
        unordered_map<string ,int> mp;
        for(int i=0;i<n;i++){
           if(v.at(i).first)
        
        }
    return 0;
}