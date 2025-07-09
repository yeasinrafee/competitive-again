#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = 0;
    int m = n - 1;

    while (k < m)
    {
        swap(arr[k], arr[m]);
        k++;
        m--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}