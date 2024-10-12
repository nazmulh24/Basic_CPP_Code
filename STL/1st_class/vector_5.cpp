#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    while (cin >> n)
    {
        if (n == 0)
            break;
        v.push_back(n);  //=> n->index.
    }
    for (auto u : v)
        cout << u << " ";
    cout << endl;
    
    return 0;
}
