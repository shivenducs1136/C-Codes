#include<bits/stdc++.h>
using namespace std; 
int main(){ 

    string s; 
    cin>>s;
    int l= s.size(); 

    int i,chaar = 256;
    int arr[chaar] = {0};
    for(i=0;i<chaar;i++) arr[i] = 0;   
    for(i =0 ; i < l; i++){
        arr[s[i]]++; 
    }
    .



    return 0; 
}