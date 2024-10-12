#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sum = 0;
    cin >> n;
    for (long long int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum -= i; // subtract odd terms
        else
            sum += i; // add even terms
    }
    cout << sum << endl;
    return 0;
}
