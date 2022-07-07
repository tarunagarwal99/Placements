#include<iostream>
using namespace std;

int main() {
    string s="abdcefgh";
    int n=s.size();
    int l=2,r=5;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s;
    return 0;
}