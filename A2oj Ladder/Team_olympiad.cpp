#include<bits/stdc++.h>
using namespace std;
#define ll int  
int main(){

    ll n; 
    cin>>n; 
    ll arr[n];
    ll i,j,k; 
    for(i=0;i<n;i++){cin>>arr[i];}
    ll brr[3]={0};
    for(i=0;i<n;i++){
        brr[arr[i]]++;
    } 
    
    return 0; 
}