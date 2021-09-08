#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){

    string str; 
    int i; 
    cin>>str; 
    int idx = str.find("WUB");
    while(idx>=0) 
        {
            str.insert(idx,",");
        idx= str.find("WUB");
        str.erase(idx,3);
        idx= str.find("WUB");
    }
    char c[202]=""; 
    
    for(i=0;i<str.length();i++){
        c[i] = str[i];  
    }
     char *ptr = strtok(c,",");
     cout<<ptr<<" "; 
        while(ptr != NULL){
       ptr = strtok(NULL,","); 
           cout<<ptr<<" "; 
   }


    cout<<str<<endl; 
    return 0 ; 
}