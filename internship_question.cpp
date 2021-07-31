#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, j, k, m;
    cout<<"Enter any odd number :"<<endl; 
    cin >> n;
    if(n%2 != 0){
 for (m = 1; m <= 2; m++)
    {
        k = 1;
        for (i = n / 2 + 1; i >= 1; i--)
        {
            for (j = 1; j < i; j++)
                cout << " ";
            for (j = 1; j <= k; j++)
                cout << "*";
            cout << "\n";
            k = k + 2;
        }
    }
    k = n - 2;
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= i; j++)
            cout << " ";
        for (j = 1; j <= k; j++)
            cout << "*";
        cout << "\n";
        k = k - 2;
    }
    }
   else {
       cout<<"Making the input odd and the showing the pattern : "<< endl ; 
        n --; 
        for (m = 1; m <= 2; m++)
    {
        k = 1;
        for (i = n / 2 + 1; i >= 1; i--)
        {
            for (j = 1; j < i; j++)
                cout << " ";
            for (j = 1; j <= k; j++)
                cout << "*";
            cout << "\n";
            k = k + 2;
        }
    }
    k = n - 2;
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= i; j++)
            cout << " ";
        for (j = 1; j <= k; j++)
            cout << "*";
        cout << "\n";
        k = k - 2;
    }
   }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 2;
    while (t--)
    {
        solve();
    }
}