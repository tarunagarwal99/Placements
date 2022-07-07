#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//here we have to convert lowercase to uppercase and uppercase to lowercase
int main() {
    string s="aBEaCDFgH";
    int n=s.size();
    for(int i=0;i<n;i++){
        //method 1
        if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
        }
        else if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
        //method 2
        s[i]=s[i]^32;
    }
    cout<<s;
    return 0;
}