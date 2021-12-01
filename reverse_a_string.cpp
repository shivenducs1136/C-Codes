#include<bits/stdc++.h>
using namespace std; 
int main(){
    string s; 
    cin>>s; 
    int l = s.length()-1; 
    string p="";
    while(l){
        p = p + s[l--];  
    }
    p = p + s[0]; 
    cout<<p<<endl; 


    return 0; 
}