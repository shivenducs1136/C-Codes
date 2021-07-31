#include<bits/stdc++.h>
using namespace std;

int bin(int n)
{
    int t,k,arr[100],sam=0,i=0;
    while(i<100)
    {
        arr[i]=9;
        i++;
    }
    i=0;
    while(n!=0)
    {
        t=n%2;
        n=n/2;
        arr[i]=t;
        i++;
    }
    i=100;
    while(i>0)
    {
        i--;
        if(arr[i]!=9)
        cout<<arr[i];

    }
}
int main()
{
    int n;
    cin>>n;
   bin(n);
    return 0;
}