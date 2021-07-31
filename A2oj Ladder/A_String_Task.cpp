#include<bits/stdc++.h>
using namespace std; 
int main(){

    string str; 
    cin>>str; 
    int l = str.length(); 
    int i,j,k; 
    for(i=0;i<l;i++){
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'){
            str[i] = '0';  
        }
        if(str[i]!='0'){
            if(str[i]>='A' && str[i]<= 'Z'){
                str[i] = str[i] + 32; 
            }
            cout<<"."<<str[i]; 
        }
    }

    return 0; 
}