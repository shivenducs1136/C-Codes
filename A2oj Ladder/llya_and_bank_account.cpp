#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){

    ll int n; 
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
       ll int x = n;
       ll int a,b; 
        a =x%10;
        x = x/10; 
        b = x %10; 
        if(b<0){
            b*=-1;
        }
        if(a<0){
            a*=-1;
        }
        if(a>b){
            cout<<x<<endl; 
        }
        else{
            x = x/10;
            x*=10;
            x+=-1*a;
            cout<<x<<endl;  
        }
    }


    return 0; 
}