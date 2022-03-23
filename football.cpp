#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[100];
        int B[100];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int arr[100];
        int max;
        max = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = A[i] * 20 - B[i] * 10;
            if (arr[i + 1] > max)
            {
                max = arr[i];
            }
        }
        if (max <= 0)
        {
            max = 0;
        }
        cout << max << endl;
    }
    return 0;
}


