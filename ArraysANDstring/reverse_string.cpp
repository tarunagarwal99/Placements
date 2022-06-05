#include<iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    int n=str.size();
    //method 1: swapping
    // for(int i=0;i<n/2;i++){
    //     swap(str[i],str[n-i-1]);
    // }
    // cout<<str;
    //method 2:iterate from the last
    for(int i=n-1;i>=0;i--){
        cout<<str[i];
    }
    
    return 0;
}