#include<bits/stdc++.h>
using namespace std;
#define char 256 
int main(){

    string str; 
    cin>>str; 
    int l= str.length();
    
    for(int i =0; i< l ; i++){
        
    }

    return 0; 
}

// Naive Solution 
/*
#include<bits/stdc++.h>
using namespace std; 
int main(){

    string str; 
    cin>>str; 
    int l= str.length();
    int count =0; 
    bool cond = false; 
    for(int i = l -1; i>= 0; i--){
        count =0; 
        for(int j = 0; j< l;j++){
            if(str[i]==str[j] && i!=j){
                count++; 
            }
        }
        if(count == 0){
            cond = true; 
            cout<<l-i-1<<endl;             
            break ; 
        }
    }
    if(!cond){
        cout<<"-1"<<endl ; 
    }

    return 0; 
}*/