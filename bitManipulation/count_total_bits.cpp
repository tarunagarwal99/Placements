#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        count++;
        n>>=1;
    }
    cout<<count;
    cout<<(1<<count);
    return 0;
}