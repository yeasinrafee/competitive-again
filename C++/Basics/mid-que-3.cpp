#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s[100001];
    while (cin.getline(s, 100001))
    {
        char result[100001];
        int idx = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                result[idx++] = s[i];
            }
        }
        sort(result, result + idx);

        for (int i = 0; i < idx; i++)
        {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}