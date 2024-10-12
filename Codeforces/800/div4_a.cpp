#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int a = 0, b = 0;
        cin >> s;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }
        cout << (a > b ? "A" : "B") << endl;
    }
    return 0;
}
