//love bhaiya sde sheet -1st question

#include<iostream>
using namespace std;
void reverseArray(int A[],int start,int end){
    while(start<end){
    int temp=A[start];
    A[start]=A[end];
    A[end]=temp;
    start++;
    end--;
    }
}
int main() {
   int A[]={1,2,3,4,5};
    int n = sizeof(A) / sizeof(A[0]);
    reverseArray(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}