#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n,m; 
    cin>>n>>m;
    int t =n ; 
    int arr[m],brr[n]; 
    int i,j; 
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
        if(t){
            brr[i] = arr[i]; 
        }
        t--; 
    }

    sort(brr,brr+n); 

    cout<<brr[n-1] - brr[0] <<endl; 
    

    return 0; 
}