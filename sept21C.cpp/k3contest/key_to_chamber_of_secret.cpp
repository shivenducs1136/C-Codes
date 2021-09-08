#include<bits/stdc++.h>
using namespace std; 

void rev(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){
    int t; 
    cin>>t; 
    while(t--){

    string s; 
    cin>>s; 
    string tt;
    tt =s; 
    int l = s.length(); 
    bool flag = false; 
    for(int i=0;i<l;i++){
        if(s[i]=='A'||s[i]=='H'||s[i]=='I'||s[i]=='M'||s[i]=='O'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='Y'||s[i]=='X'){

        }else{
            flag = true; 
            break; 
        }
    }

    if(flag){
        cout<<"clone-no"<<endl; 
    }
    else{
        rev(s); 
        if( s == tt){
            cout<<"clone-yes"<<endl; 
        }
        else{
            cout<<"clone-no"<<endl; 
        }

    }

    }


    return 0; 
}