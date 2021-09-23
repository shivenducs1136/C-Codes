#include<bits/stdc++.h>
using namespace std;

bool leftmost(string & s){
    int l = s.length(); 
    int chara[27] = {0};
    for(int i =0 ; i< l;i++){
        chara[s[i]]++;
    }
    int i =0; 
    while(chara[s[i]]!=2){
        
    }

}
int main(){
    return 0; 
}


/*#include<bits/stdc++.h>
using namespace std; 
int main(){
    string s; 
    cin>>s; 
    int l = s.length();
    bool erer=false; 
    int k; 
    for(int i = 0 ; i< l ; i++){
        for(int j = 0;j<l;j++){
            if(s[i] == s[j] && i!=j){
                erer = true;
                k = i;  
                break; 
            }
        }
        if(erer) break;
    }
    if(erer){
        cout<<k;
    }
    else{
        cout<<"-1"<<endl; 
    }

    return 0; 
}
*/