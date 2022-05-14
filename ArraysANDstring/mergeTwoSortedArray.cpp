#include<iostream>
using namespace std;
//till then this code is incomplete
int main() {
    int arr1[]={1,3,5,7};
     int arr2[]={0,2,6,8,9};
     int n=sizeof(arr1)/sizeof(arr1[0]);
     int m=sizeof(arr2)/sizeof(arr2[0]);
     int i=0,j=0;
     while(i<n && j<m){
         if(arr1[i]>arr2[j]){
             arr1[i]=arr2[j];
             arr2[j]=arr1[i];
             i++;
         }
         else if(arr1[i]<arr2[j]){
            
             j++;
         }
       
        else{
            i++;
            j++;
        }
     }
     for(int x=0;x<n;x++){
      cout<<arr1[x]<<" ";
     }
      for(int y=0;y<n;y++){
      cout<<arr1[y]<<" ";
     }
    return 0;
}