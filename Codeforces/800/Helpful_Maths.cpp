#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, a, b;
    cin >> str;
    int l = str.length();
    int i, j = 0, k = 0;
    for (i = 0; i < l; i++)
    {
        if (i % 2 == 0)
            a = a + str[i];
        else
            b = b + str[i];
    }
    sort(a.begin(), a.end());
    for (i = 0; i < l; i++)
    {
        if (i % 2 == 0)
            str[i] = a[j++];
        else
            str[i] = b[k++];
    }
    cout << str << endl;
    return 0;
}
