#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n ; 
    cin>>n; 
    int arr[n],brr[n]; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
        brr[i] = arr[i]; 
    }

    sort(arr,arr+n); 

    int a,b; 

    for(i=0;i<n;i++){
        if(arr[0] == brr[i]){
            a = i +1 ;
        }
    }

    for(i=0;i<n;i++){
        if(arr[n-1] == brr[i]){
            b=i + 1;
            break;  
        }
    }
    // cout<<a<<" "<<b<<endl; 
int res; 
    if(a>b){
         res = (n - a) + (b-1); 
        cout<<res;
    }
    else{
         res = (b-1)+ (n-a-1) ; 
        cout<<res ; 
    }


    

    return 0; 
}