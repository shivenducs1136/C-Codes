#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(int);

    //  Applicable for all type of Containers
    rotate(arr, arr + 1, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> v{10, 20, 30, 40, 50};

    rotate(v.begin(), v.begin() + 3, v.end());
    cout << endl
         << "Permutation Part*****" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // Next_permutation
    cout <<endl;

    next_permutation(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    next_permutation(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    next_permutation(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    next_permutation(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    next_permutation(v.begin(), v.end());

    // for each loop

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}