#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //actual code begins
    //predicate is arr[mid]>arr[mid+1]
    //first T
    int lo = 0,hi = n - 1, mid;
    while (lo < hi)
    {
        //mid computation
        mid = lo + (hi - lo) / 2;
        //decision
        if (arr[mid] > arr[mid + 1])
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    //sanity check
    //here we get index at which maximum element is present
    cout << lo << endl;

    return 0;
}