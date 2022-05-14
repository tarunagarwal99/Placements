#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string A="crulgzfkif gg ombt vemmoxrgf qoddptokkz op xdq hv ";
    // int n=A.size();
    // int l=0,r=n-1;
    // int i=0;
    // if((A[0]=="") ||  (A[n-1]==" " )){

    // }
    
    // for( int i=0;i<n/2;i++){
    //     swap(A[i],A[n-i-1]);
    // }
    // while(l<r){
    //     swap(A[l],A[r]);
    //     l++;
    //     r--;
    // }
    // for(int i=start;i<i++){

    // }
    // for(int i=0;i<n;i++){
    // while(A[i] != "")
    // }
    vector<string> tmp;
    string str = "";
     for (int i = 0; i < A.length(); i++)
    {
         
        // Check if we encounter space
        // push word(str) to vector
        // and make str NULL
        if (A[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
 
        // Else add character to
        // str to form current word
        else
            str += A[i];
    }
   
    // Last word remaining,add it to vector
    tmp.push_back(str);
 
    // Now print from last to first in vector
    int i;
    for (i = tmp.size() - 1; i > 0; i--){
        cout<< tmp[i] << " ";
    }
    // Last word remaining,print it
    cout<< tmp[0] << endl;

    // cout<<A;
    return 0;
}