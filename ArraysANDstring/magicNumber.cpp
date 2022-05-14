#include<iostream>
using namespace std;
  
int summation(int n){
    if(n<10){
        return n;
    }
    while(n!=0){
    return summation(n/10)+n%10;
    }
    // summation(n);
  }
int main() {
    int n;
    cin>>n;
    
      cout<<summation(n); 
   
    
    return 0;
}