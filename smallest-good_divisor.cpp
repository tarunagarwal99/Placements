#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getsum(vector<int>& arr, int divisor)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += ceil((float)arr[i] / divisor);
    }
    return sum;
}

int main()
{
    int n, threshold, max_num = INT_MIN;
    cin >> n >> threshold;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        max_num = max(max_num, arr[i]);
    }


    //actual code starts
    //predicate: sum(x) <= threshold
    //first T  


    int lo = 1, hi = max_num, mid;
    while (lo < hi)
    {
        //mid computation
        mid = lo + (hi - lo) / 2;

        //decision
        if (getsum(arr, mid) <= threshold)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }

    //no sanity check required
    cout << lo << endl;

    return 0;
}