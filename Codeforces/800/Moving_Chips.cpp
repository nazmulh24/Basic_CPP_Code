#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int li = -1, hi = -1;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (li == -1)
                    li = i;
                hi = i;
            }
        }
        li++;
        for (int i = li; i < hi; i++)
            if (a[i] == 0)
                count++;
        cout << count << endl;
    }
    return 0;
}
