#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t; 
    while(t--){
        int n,a,b; 
        cin>>n>>a>>b; 
        string s; 
        cin>>s;  
        int i=0,total_time =0 ; 
        int l =s.size();
        for(i=0;i<l;i++){
            if(s[i] == '0'){
                total_time = total_time + a; 
            }
            if(s[i] == '1'){
                total_time = total_time + b; 
            }
        }
        cout<<total_time<<endl; 
    }

    return 0; 
}