#include<bits/stdc++.h>
using namespace std;
#define dd long long int 
int main(){

    dd n,s; 
    cin>>s>>n; 
    pair<dd , dd> p[n];
    dd q;  
    for(dd i  =0 ; i< n; i++){
        cin>>q; 
        p[i].first = q;
        cin>>q;  
        p[i].second =q;
    }
dd count =0; 
    for(dd i =0;i<n;i++){
        if(s>p[i].first){
            s = s +p[i].second;count++;   
        }
    }
    if(count==n){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
    }

    return 0; 
}