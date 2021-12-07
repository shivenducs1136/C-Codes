#include<bits/stdc++.h>
using namespace std; 
int main(){

    unordered_map<char,int> mp; 
    string s; 
    cin>>s; 
    int i,j,k; 
    for(i=0;i<s.size();i++){
        mp[s[i]]++; 
    }
    cout<<" Unique characters "<<endl; 
    for(i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            cout<<s[i]<<" "; 
        }
    }
    cout<<endl<<" Duplicates "<<endl; 
    for(i=0;i<s.size();i++){
        if(mp[s[i]]>1){
            cout<<s[i]<<" Repeates "<<mp[s[i]]<<" times"<<endl; 
        }
    }
    return 0; 
}