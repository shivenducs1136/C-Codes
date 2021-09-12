
#include<bits/stdc++.h>
using namespace std; 

bool sbse(string &s,string &sb){

    int l1= s.length();
    int l2 = sb.length();
    int i=0,j=0,k; 
    for(k = 0; k<l1;k++){

        if(s[i] == sb[j]){
            i++;
            j++;
        }
        else{
            i++; 
        }

    }
    if(j == l2){
        return true;
    }
    else{
        return false; 
    }

}

int main(){

     string s; 
    cin>>s; 
    string subs;
    cin>>subs; 
    if(sbse(s,subs)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl; 
    }
    return 0; 
}

/*
#include<bits/stdc++.h>
using namespace std;

bool sbse(string &s,string &sb){

    int l = s.length();
    int l1 = sb.length();
    int count=0;
    int a=-1; 
    for(int i=0;i<l1;i++){
        int t=s.find(sb[i]);
        if(t!=l1&& a<i){
            count++; 
            a = t; 
        }
    }
    if(count == l1){
        return true;
    }
    else return false; 

}

int main(){

    string s; 
    cin>>s; 
    string subs;
    cin>>subs; 
    if(sbse(s,subs)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl; 
    }
    return 0; 
}
*/