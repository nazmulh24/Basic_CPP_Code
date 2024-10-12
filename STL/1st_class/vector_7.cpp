#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    vector<int> v = {4, 7, 9, 4, 9, 7, 1, 3};

    /*
        // cout << v.back() << endl; //-> to print last element.
        // v.pop_back();             //-> delete last element.

        // cout << *v.begin() << endl;  //-> to print 1st element __ *v.begin() -> pointer.

        // v.erase(v.begin()); //-> to delate ant element using pointer.
        v.erase(v.begin()+2);  //-> delete i index.
    */

    // for (auto u : v)
    //     cout
    //         << u << " ";
    // cout << endl;

    //----------------------------------------------------
    //==> To find unique and repeted numbers...
    // sort(v.begin(), v.end());
    // unique(v.begin(), v.end());

    // for (auto u : v)
    //     cout
    //         << u << " ";
    // cout << endl;

    // int sz = unique(v.begin(), v.end()) - v.begin(); //-> size of unique value
    // cout << sz << endl;
    // for (int i = 0; i < sz; i++) //-> print unique value.
    //     cout << v[i] << " ";
    // cout << endl;

    //--------------------------------------------------
    //--> To find maximum and minimum value...

    // vector<int>::iterator it = max_element(v.begin(), v.end()); //-> max value.
    // cout << *it << endl;  //--> pointer type.

    int n = max_element(v.begin(), v.end()) - v.begin(); //-> to find max element index..
    cout << n << endl;

    int m = min_element(v.begin(), v.end()) - v.begin(); //-> to find mini element index.
    cout << m << endl;

    return 0;
}
