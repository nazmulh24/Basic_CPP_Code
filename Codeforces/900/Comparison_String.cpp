#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]==s[i+1])
                count++;
            else
        }
        cout << count << endl;
    }
    return 0;
}
