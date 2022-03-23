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
    //predicate:arr[mid]<arr[0]
    //first T
    int lo = 0, hi = n - 1, mid;
    while (lo < hi)
    {
        //mid condition
        mid = lo + (hi - lo) / 2;

        //condition check
        if (arr[mid] < arr[0])
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }

    //sanity check

    if (arr[lo] < arr[0])
    {
        cout << arr[lo] << endl;
    }
    else
    {
        cout << arr[0] << endl;
    }

    return 0;
}