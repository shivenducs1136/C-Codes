#include<bits/stdc++.h>
using namespace std; 

bool ispalindrome(string &str, int start , int end) {
    if((end - start) == 0 ||(end - start) == 1 ){
        return true; 
    }
    else{
        if(str[start] == str[end-1] && ispalindrome(str, start +1 , end -1)){
            return true; 
        }
        else{
            return false; 
        }
    }
}

int main(){

    string str; 
    cin>>str; 
    int len = str.length(); 
    if(ispalindrome(str,0,len)){
        cout<<"YES"<<endl;  
    }
    else{
        cout<<"NO"<<endl; 
    }




    return 0; 
}