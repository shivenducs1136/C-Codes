#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int count=0;
    vector<int> v;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    vector<int>v2;
    for(int i=0;i<v.size();i++)
    {
        v2[i]=v[i];
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v2[j]==v[i])
            {
                v[i]=count;
                count++;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
        return 0;
}