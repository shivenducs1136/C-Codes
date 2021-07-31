#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int a=v[i];
        int countlucky=0;
        while (a>0)
        {
            int b =a%10;
            cout<<b<<endl;
             a=a/10;
            cout<<a<<endl;
            if (b==4||b==7)
            {
                countlucky++;
            }
        }
        if(countlucky<=k)
        {
            count++;
        }
    }
    cout<<count<<endl;
        
    return 0;
}