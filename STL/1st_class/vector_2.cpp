#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;

    vector<int> ve = {1, 4, 6, 8, 3};
    // vector<int> ve;

    // ve.clear();   //-> To clear the vector.
    // cout << ve.empty() << endl; //-> To check the vector is empty or not (bool type) -> is empty print 1 -> is not empty print 0.

    ve.resize(10);   //-> Resize the vector 10.

    // for (int i = 0; i < n; i++) //-> To get input from user.
    // {
    //     int a;
    //     cin >> a;
    //     ve.push_back(a);
    // }

    cout << ve.size() << endl; //-> Total size of vector.

    for (int i = 0; i < ve.size(); i++) //-> To print output.
    {
        cout << ve[i] << " ";
    }
    cout << endl;

    return 0;
}
