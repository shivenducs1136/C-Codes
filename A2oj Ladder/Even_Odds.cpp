#include<bits/stdc++.h>
using namespace std; 
int main(){

   long long int n,m ; 
    cin>>n>>m;
    m = m-1; 
    long long int odd,even; 
    if(n%2 == 0 ){

        odd = n/2; 
        even = odd; 
        if(m < odd){
            cout<<2*m+1<<endl; 
        }
        else{
            cout<<2*(m-odd+1)<<endl; 
        }

    }
    else{

        even = n/2; 
        odd = even + 1; 
         if(m < odd){
            cout<<2*m+1<<endl; 
        }
        else{
            cout<<2*(m-odd+1)<<endl; 
        }


    }


    return 0; 
}