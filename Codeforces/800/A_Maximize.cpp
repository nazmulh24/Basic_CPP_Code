#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int val[x - 1];
        for (int i = 1, j = 0; i < x; i++, j++)
        {
            val[j] = gcd(x, i) + i;
        }
        int max = INT_MIN, ans;
        for (int j = 0; j < x - 1; j++)
        {
            if (max < val[j])
            {
                max = val[j];
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
