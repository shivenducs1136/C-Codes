#include<bits/stdc++.h>
using namespace std; 
int main(){
    
    int r,c; 
    cin>>r>>c; 
    char arr[r][c]; 
    int i,j,Scount=0; 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j]; 
            if(arr[i][j] == 'S'){
                Scount++; 
            }
        }
    }
    int res = (2*(r + c - Scount)) - ((r - Scount)*(c-Scount)); 
    cout<<res<<endl;
    return 0; 
}