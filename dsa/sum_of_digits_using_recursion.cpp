#include<bits/stdc++.h>
using namespace std; 

int sumofdigits(int n){
    if(n == 0){
        return 0 ; 
    }
    else{
        return (n%10 + sumofdigits(n/10));
    }
}

int main(){

    int n; 
    cin>>n; 
    cout<<sumofdigits(n)<<endl; 
    return 0; 

}