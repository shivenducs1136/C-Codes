#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n; 
    cin>>n; 
    int i,j,k,arr[n][n]; 
    char a; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a; 
            if(a=='x'){
                arr[i][j] = 1; 
            }
            else{
                arr[i][j] = 0; 
            }
        }
    }

    int l=-1,count=0; 
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(arr[i][j]!=arr[i][j-1]&& (j-1)>=0){
                count++; 
            }
        }
    }
    if(count==2){
        cout<<"NO"<<endl; 
        return 0; 
    }
    if(count%2==0){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
    }
    return 0; 
}