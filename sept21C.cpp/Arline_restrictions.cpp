#include<bits/stdc++.h>
using namespace std; 
int main(){

    int t; 
    cin>>t; 
    while(t--){

        int a,b,c,d,e; 
        cin>>a>>b>>c>>d>>e; 
        int s1 = a+b,s2= a+c,s3 = b+c;
        bool ans = false; 
        if(s1<=d){
            if(c<=e){
                ans = true; 
            }
        } 
         if(s2<=d){
            if(b<=e){
                ans = true; 
            }

        }
         if(s3<=d){
            if(a<=e){
                ans = true;  
            }
        }

        if(ans){
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl; 
        }

    }


    return 0; 
}