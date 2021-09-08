#include<bits/stdc++.h>
using namespace std; 
int main(){

    /*
    strtok(string,character); 
    use to break the string when the character comes

    */

   char s[100] = "This is Shivendu Mishra here."; 
   char *ptr = strtok(s," "); 

   cout<<ptr<<endl; 
//    ptr = strtok (NULL," ");
//    cout<<ptr<<endl; 

   while(ptr != NULL){

       ptr = strtok(NULL," "); 
       cout<<ptr<<endl; 

   }


    return 0; 
}