#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int t=arr[i];
        int j=i-1;
        while(arr[j]>t && j>=0)
        {
            arr[j+1]=arr[j];
            j--;    
        }
        arr[j+1]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}