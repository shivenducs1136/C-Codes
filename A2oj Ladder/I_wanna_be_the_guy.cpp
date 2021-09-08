// Wrong
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n; 
    int a; 
    cin>>a;
    int arr[a]; 
    int b; 
    cin>>b; 
    int brr[b]; 
    int crr[a+b]; 
    int i,j,k ; 
    for(i=0;i<a;i++){
        cin>>arr[i]; 
        crr[i] = arr[i]; 
    }
    for(i=0;i<a;i++){
        cout<<crr[i]<<" "; 
    }
       cout<<endl; 
    for(i=0;i<b;i++){
        cin>>brr[i]; 
        crr[a+i] = brr[i]; 
    }
    for(i=0;i<a+b;i++){
        cout<<crr[i]<<" "; 
    }
    cout<<endl; 
    for(i=0;i<a+b;i++){
        for(j=0;j<a+b;j++){
            if(crr[i] == crr[j] && i!=j){
                crr[j] = -1; 
            }
        }
    }
    for(i=0;i<a+b;i++){
        cout<<crr[i]<<endl; 
    }
    int count=0; 
    for(i=0;i<a+b;i++){
        if(crr[i]!=-1){
            count++;
        }
    }
    cout<<endl; 

    cout<<count<<endl; 
    if(count== n){
        cout<<"I become the guy."<<endl; 
    }
    else{
        cout<<"Oh, my keyboard!"<<endl; 
    }

    return 0;
}