#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n;
        int sum;
        cin >> n >> sum;
        int arr[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if ((arr[i] + arr[j] + arr[k]) == sum)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
        t--;
    }
    return 0;
}