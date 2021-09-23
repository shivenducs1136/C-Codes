#include<bits/stdc++.h>
using namespace std; 
int main(){
    string haystack,needle;
    cin>>haystack>>needle ; 
      int n = haystack.length(); 
        int m = needle.length(); 
        if(n<m) cout<<"-1" ; 
        else if(n==0){
            cout<<"0"<<endl; 
        }
       else{
            int j = 0,a,b=0; 
            char aa ; 
        for(int i = 0 ;i<n  && j< m ;i++){
            if(haystack[i] == needle [j]){
                if(b==0 || aa == haystack[i] && aa!= haystack[i-1]){
                a = i; 
                aa = haystack[a]; 
                }
                j++; 
                b=1;
            }
        }
        if(j == m) {
            cout<<a; 
        }
        else{
            cout<<"-1";  
        }
         
       }


    return 0 ;
}