// https://codeforces.com/problemset/problem/71/A
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int o=0,T;
    cin>>T;
    while(o<T)
    {
        string a;
        cin>>a;
        int count=0,i,l=a.length();
        if(l>10)
        {
            for(i=1;i<(l-1);i++)
        {
            count++;
        }
        cout<<a[0]<<count<<a[l-1];
        }
        else
        {
            for(i=0;i<l;i++)
            {
                cout<<a[i];
            }
        }
        o++;
    }
}