#include<bits/stdc++.h>
using namespace std; 
 int lengthOfLongestSubstring(string s) {
    
        int chara = 256; 
        int arr[chara] ; 
        int i, l = s.size() ; 
        for(i=0;i<chara;i++) arr[i] = 0; 
        
        for(i =0 ; i < l ; i++ ){
            arr[s[i]]++; 
        }
        int count = 0 ; 
        for(i=0 ; i<chara; i++ ){
             if(arr[i] != 0){
                 count ++; 
             }
        }
        return count; 
    }