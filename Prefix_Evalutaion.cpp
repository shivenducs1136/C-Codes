#include<bits/stdc++.h>
using namespace std; 
int main(){

    string s; 
    cin>>s; 
    int i,d,e; 
    stack<int> stck; 
    int low = 0 , high = s.size() -1; 
    while(low<high){
        char d = s[low]; 
        s[low] = s[high]; 
        s[high] = d ; 
        low ++; 
        high --; 
    }
    for(i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            stck.push(s[i] - '0');
        }
        else{
            if(s[i] == '+'){
                d = stck.top();
                stck.pop(); 
                e = stck.top(); 
                stck.pop();
                stck.push(d+e);  
            }   
            else if(s[i] == '*'){
                d = stck.top();
                stck.pop(); 
                e = stck.top();
                stck.pop(); 
                stck.push(d*e);  
            }
            else if(s[i] == '-'){
                  d = stck.top();
                stck.pop(); 
                e = stck.top();
                stck.pop(); 
                stck.push(e-d);  
            }
            else if (s[i] == '/')
            {
                  d = stck.top();
                stck.pop(); 
                e = stck.top();
                stck.pop(); 
                stck.push(e/d);  
            }            
        }
    }
    cout<<stck.top()<<endl; 
    return 0; 
}