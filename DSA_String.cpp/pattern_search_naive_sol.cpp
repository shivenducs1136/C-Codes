#include<bits/stdc++.h>
using namespace std;
int main(){

    string s,p; 
    cin>>s>>p ;
    int l1= s.length(); 
    int l2= s.length(); 

    int i=0;
    int found=0,count=0; 
    while(found!=string::npos){
        found = s.find(p,found + i);
        cout<<found<<endl; 
    }
       



    return 0; 
}