#include<iostream>
using namespace std;
    int isvoid(int  x, int  y){
       
    }
    int isvoid( string  x, int y){

    }   
    int isvoid(vector<int> &xyz){

    }    
int main() {
    int a=2,b=3;
    string c='m';
    isvoid(a,b);      
    isvoid(c,b);
    vector<int> ans{1,2,3,4};
    isvoid(ans);

    return 0;
}