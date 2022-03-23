#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int getTrip(vector<int>& packages,int capacity){
    int trip_count = 0, curr_trip_capacity = 0;
    for (int i = 0; i < packages.size(); i++)
    {
        if(curr_trip_capacity + packages[i] <=  capacity){
            curr_trip_capacity += packages[i];
        }else{
            trip_count++;
            curr_trip_capacity = packages[i];
        }

      
    }
      //   because last iteration is not included in this process
        return (trip_count + 1);
     
}

int main() {
    int n,D,max_weight=INT_MIN,sum_weights=0;
    cin>>n>>D;
    vector<int> packages(n);
    for (int i = 0; i < n; i++)
    {
        cin>>packages[i];
        max_weight = max(max_weight,packages[i]);
        sum_weights += packages[i];
    }

    //actual code begins
    //predicate : trip(x) <= D
    //first T

    int lo = max_weight,hi = sum_weights,mid;


    while(lo < hi){
            //mid element 
            mid = lo +(hi-lo)/2;
        //method
        if(getTrip(packages,mid) <= D){

            hi=mid;
        }else{
            lo = mid+1;
        }
    }


    //sanity check
       cout<<lo<<endl;
    return 0;
}