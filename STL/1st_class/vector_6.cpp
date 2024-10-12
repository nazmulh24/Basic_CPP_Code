#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // sort(a, a + 3);  //-> array without index is a pointer.
    sort(a, a + 3); //->... sort(a+0, a + 3) === sort(a, a + 3)

    vector<int> v = {3, 2, 5, 1, 4};

    //==> vector sorting.
    /*
        // sort(v.begin(), v.end()); //--> end index er ag porjontu.--> small to large.
        // sort(v.begin(), v.begin() + 1);  //-> start->i[0] => end hobe-> +i index er ag porjontu. -->using iterator.
        sort(v.begin() + 1, v.begin() + 1); //-> start-> i[1] => end-> +i index er ag porjontu.
    */

    //==> complecity of sort function.
    // sort(v.begin() + 1, v.begin() + 4); //--> O(nlog2(n)); ->complexity

    sort(v.begin(), v.end(), greater<int>()); //-> large to small.
    // sort(v.rbegin(), v.rend()); //==> easy way to sort large to small.

    //==> Reverse the vector...
    // reverse(v.begin(), v.end());

    for (auto u : v)
        cout << u << " ";
    cout << endl;

    return 0;
}
