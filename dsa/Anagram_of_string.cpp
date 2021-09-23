#include<bits/stdc++.h>
using namespace std;
#define ll int
bool anagram(string &s1,string &s2){

    ll l1 = s1.length();
    ll l2 = s2.length();
    ll count= 0; 
    if(l1==l2){
        for(ll i =0 ;i<l2;i++){
            if(s1[i] != s2[i] ){
                count ++;
            }
        }
    }
    else {
        return false; 
    }
    if(count == l1){
        return true; 
    }
    else{
        return false;
    }

} 
int main(){
    
    string s1,s2;
    cin>>s1>>s2; 
    if(anagram(s1,s2)){
        cout<<"YES";
    } 
    else{
        cout<<"NO";
    }
    
    return 0; 
}