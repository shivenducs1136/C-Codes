#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n ; 
    cin>>n ; 
    pair<int,int> p[n];  
    int i,j; 
    for(i=0;i<n;i++){
        cin>>p[i].first; 
    }
    for(i=0;i<n;i++){
        cin>>p[i].second; 
    }
    for(i=0;i<n;i++){
        if(p[i].second>p[i+1].second && p[i].first < p[i+1].first && i+1<n){
            cout<<"Happy Alex"<<endl; 
        }
        
    }

    return 0; 
}