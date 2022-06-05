#include<iostream>
using namespace std;

int main() {
    string str="foobar";
     char letter='o';
    int count=0;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]==letter){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}