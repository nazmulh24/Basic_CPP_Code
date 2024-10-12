#include <bits/stdc++.h>
using namespace std;
int main()
{
    //-->> 2'D vector___vector of vector...

    vector<vector<int>> ve;

    vector<int> ve1 = {2, 4, 6};
    vector<int> ve2 = {1, 3, 5};

    ve.push_back(ve1);
    ve.push_back(ve2);

    for (auto u : ve)
    {
        for (auto w : u)
            cout << w << " ";
        cout << endl;
    }

    return 0;
}
