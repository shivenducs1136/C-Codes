// https://www.hackerrank.com/challenges/30-review-loop/problem?h_r=profile
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;int i,l;
    cin>>a;
    l=a.length();
    for(i=0; i<l; i++)
    {
        if(a[i]==',')
        {
            cout<<endl;
            i++;
        }
        cout<<a[i];
    }

    return 0;
}