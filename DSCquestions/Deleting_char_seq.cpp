#include<bits/stdc++.h>
using namespace std;

void Del_char (string s) {
   string ans="",ans1="";
   int l = s.length(); 
    for(int i=0;i<l-1;i++){
        if(s[i]>s[i+1]){
            for(int j=0; j<l;j++){
                if(i!=j){
                    ans+=s[j];
                }
            }
        }
 
    }
    for(int i=0;i<l-1;i++){
        cout<<ans[i]; 
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;
    Del_char(S); 
}