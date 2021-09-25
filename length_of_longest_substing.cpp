#include<bits/stdc++.h>
using namespace std;


  int lengthOfLongestSubstring(string &s) {
    
        int chara = 256; 
        vector <int> dict(256,-1); 
        int maxlen = 0, start =-1 ; 
        for(int i =0 ; i< s.size() ; i++){
            if(dict[s[i]]>start){
                start = dict[s[i]] ; 
            }
            dict[s[i]] = i; 
            maxlen = max(maxlen, i-start);
        }
        
        return maxlen; 
    } 
int main(){
    
    string s; 
    cin>>s; 
    cout<<lengthOfLongestSubstring(s); 


    return 0; 
}