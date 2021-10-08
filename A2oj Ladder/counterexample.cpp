// wrong
#include<bits/stdc++.h>
using namespace std; 
int main(){

    long long int a,b; 
    cin>>a>>b;
    long long int t = max(a,b); 
    long long int t1 = min(a,b); 
    long long int c = (t-t1)/2; 
    if(c>0){
        cout<<c<<endl; 
    }
    else{
        cout<<"-1"<<endl; 
    }

    return 0; 
}