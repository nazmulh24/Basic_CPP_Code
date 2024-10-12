#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        string X;
        cin >> X;
        for (int i = 0; i < X.length(); i++)
        {
            if (X[i] == '+' && X[i + 1] == '+')
                ++count;
            else if (X[i] == '-' && X[i + 1] == '-')
                --count;
        }
    }
    cout << count << endl;
    return 0;
}
