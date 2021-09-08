#include<bits/stdc++.h>
using namespace std;

int distinct(int arr[] , int n){

    int i,j=1; 

    for(i=1;i<n;i++){

        if(arr[i] != arr[j-1]){
            arr[j] = arr[i];
            j++;
        }

    }
    return j;

}

int main (){

    int n; 
    cin>>n;
    int arr[n]; 
    int i; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }

    sort(arr,arr+n); 

    int t = distinct(arr,n); 

    for(i=0;i<t;i++){
        cout<<arr[i]<<" "; 
    }



    return 0; 
}