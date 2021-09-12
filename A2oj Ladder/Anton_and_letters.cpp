#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; 
    getline(cin,s); 
    int l = s.length(); 
    set<char> s1;
    for(int i=0;i<l;i++){
        if(s[i]>='a' && s[i]<='z'){
            s1.insert(s[i]); 
        
        }
    }
    set<char>::iterator itr;
    int s1l =0; 
    
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {   
        s1l++;
    }

    cout<<s1l<<endl; 

    return 0; 
}