#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n, d; 
    cin>>n>>d; 
    int arr[n]; 
    int i,j; 
    for(i= 0; i< n; i++){
        cin>>arr[i]; 
    }
    int t = 5; 
    int count = 1; 
    for(i=0; i< n-1 ; i ++){
        t = t + arr[i]; 
        t+=10; 
        count+=2; 
    } 
    t+=arr[n-1]; 
    if(t<=d){
        cout<<count<<endl;
    }
    else{
        cout<<"-1"<<endl; 
    }

    return 0;
}