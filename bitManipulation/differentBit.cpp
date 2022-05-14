#include<iostream>
using namespace std;
bool checkbit(int n,int i){
    if((n>>i)&1){
        return true;
    }
    return false;
}
int main() {
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<32;i++){
        int ans=a^b;
        if(checkbit(ans,i)){
            count++;
        }

    }
    cout<<count<<endl;
    return 0;
}