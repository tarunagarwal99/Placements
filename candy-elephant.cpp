#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c ,a[102],total=0;
        cin>>n>>c;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total=total+a[i];
        }
        if(total<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}