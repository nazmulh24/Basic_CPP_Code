#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] != t[l - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
