#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ; 
    cin>>n; 
    int arr[n],i,brr[4];
    for(i=0;i<4;i++) brr[i] =0;   
    for(i =0 ;i < n;i++){
        cin>>arr[i]; 
        brr[arr[i]]++;
    }
    sort(brr,brr+4);  
    cout<<brr[1]<<endl;
    int a = brr[1]; 
    while(a--){
        for(i=0;i<n;i++){
            if(arr[i] == 1){
                cout<<i<<" "; 
                arr[i] = -1; 
                break; 
            }
        }
        for(i=0;i<n;i++){
            if(arr[i] == 2){
                cout<<i<<" "; 
                arr[i] = -1; 
                break; 
            }
        }
        for(i=0;i<n;i++){
            if(arr[i] == 3){
                cout<<i<<" "; 
                arr[i] = -1; 
                break; 
            }
        }
        cout<<endl; 
    }

    return 0; 
}