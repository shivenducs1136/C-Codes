#include<bits/stdc++.h>
using namespace std; 
int main(){
    int r, c; 
    cin>>r>>c; 
    int i,j,k; 
    int t1= 1, t2 = 3,t3=1;
    bool g = false; 
    for(i=1;i<r;i++){
        
       if(i == t3){
           for(j=0;j<c;j++){
            cout<<"#";
        }
        cout<<endl; 
        t3+=2; 
       }
        // cout<<" t1 "<<t1<<" t2 "<<t2<<" i "<<i<<endl; 
        if(i == t1 ){
            for(j=0;j<c-1;j++){
                cout<<"."; 
            }
            cout<<"#";
            t1 = t1+4;
              cout<<endl; 
        }
        else if(i == t2){
            cout<<"#";
             for(j=0;j<c-1;j++){
                cout<<"."; 
             }
        t2=t2+4;
          cout<<endl; 
        }
       
        
    } 
    for(j=0;j<c;j++){
        cout<<"#";}
    return 0; 
}