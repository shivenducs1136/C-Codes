#include<bits/stdc++.h>
using namespace std; 
int main (){
    int t; 
    cin>>t;
    while(t--){
        int x,y,k,res; 
        cin>>x>>y>>k;
        if(x==1 && y ==1 & k>=1){
            res = 4; 
        } 
        else if(k>=x){
            res = (x-1) * y; 
            res =res *4; 
        }
        else{
            res = (x-k) * y; 
            res = res *4; 
        }
        cout<<res<<endl; 
    }
    return 0; 
}