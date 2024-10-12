#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        sum += i * k;
    int borrow = 0;
    if (sum > n)
        borrow = sum - n;
    cout << borrow << endl;
    return 0;
}
