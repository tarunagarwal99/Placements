#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int max_profit(vector<int>& prices) {
  
    int n =prices.size();
    int pi,min_price=prices[0],ans=0;
    for (int i = 0; i < n; i++)
    {
        // compute pi
        pi = prices[i]-min_price;

        // update minimum price
        min_price = min(min_price,prices[i]);



        //compute the answer

        ans = max(ans,pi);
    }
    return ans;

}
    int main(){

    int n, value=0;
    vector<int> v;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        v.push_back(value);candy
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    //   max_profit(vector<int>& v);  

        return 0;

    }
