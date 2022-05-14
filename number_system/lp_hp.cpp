#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int n=10e7+10;
vector<bool> isPrime(n,1);
vector<int> lp(n,0),hp(n,0);
int main() {
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<n;i++){
        if(isPrime[i]==true){
            for(int j=i*i;j<n;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
    for(int i=1;i<100;i++){
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    return 0;
}