#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
 
    cin>>n; 
    
    int a=n;
    int count=0;
    while(n>0){
        count++;
        n>>=1;
    }
    
    int x=(1<<count)-1;
    cout<<x;     
    cout<<endl;
    int y=a^x;
    cout<<y;
  
   
    return 0;
}