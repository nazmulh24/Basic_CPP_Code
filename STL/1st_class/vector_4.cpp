#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    //-> we can print vector 3 way.

    /*
        for (int i = 0; i < v.size();i++)  //-> 1'st way.
            cout << v[i] << " ";
        cout << endl;
    */

    /*
        vector<int>::iterator it;  //-> pointer of vector.  --> 2'nd way.
        for (it = v.begin(); it != v.end(); it++)
            cout << *it << " ";
        cout << endl;
    */


    // for (int u : v) //-> 3'rd way.
    //     cout << u << " ";
    // cout << endl;
    
    for (auto u : v)   //-> auto Detect vector type.
        cout << u << " ";
    cout << endl;

    return 0;
}
