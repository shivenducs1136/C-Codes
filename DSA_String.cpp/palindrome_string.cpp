#include<bits/stdc++.h>
using namespace std;

bool pali(string &s){

    int l = s.length();
    l = l-1; 
    bool t = false; 
    for(int i=0;i<=l;i++){
        if(s[i] == s[l-i] && i< (l-i)){
            t = true; 
        }
    }
    return t; 
}

int main(){

    string str,s; 
    cin>>str; 
    if(pali(str)){
        cout<<"Palindrome"<<endl; 
    }
    else {
        cout<<"Not A Palindrome"<<endl; 
    }
    

    return 0; 
}