#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    int i,j;
    char arr[n][n];  
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j]; 
        }
    }
    int count=0; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j-1] != arr[i][j] && j-1>=0){
                count++; 
            } 
        }
    }
    
    


    return 0;
}