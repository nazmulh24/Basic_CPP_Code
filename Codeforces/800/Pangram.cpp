#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool x = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (str[i] == str[j])
                x = true;
                else
                    x = false;
        }
    }
    if (x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
