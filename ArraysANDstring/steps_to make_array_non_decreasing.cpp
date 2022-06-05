#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums={5,3,4,4,7,3,6,11,8,5,11};
    for(int i=1;i<=n;i++){
            if(nums[i-1]>nums[i]){
                nums.pop_back(nums[i]);
            }
        }
    for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
    }
    return 0;
}