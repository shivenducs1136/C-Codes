// https://leetcode.com/problems/roman-to-integer/

#include<bits/stdc++.h>
using namespace std; 
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
bool check(char s1, char s2){
    int l1,l2; 
    switch(s1) {
  case 'I':
    l1= 1; 
    break;
  case 'V':
    l1 = 5;
    break;
   case 'X':
    l1 = 10;
    break;
     case 'L':
    l1 = 50;
    break;
     case 'C':
    l1 = 100;
    break;
     case 'D':
    l1 = 500;
    break;
     case 'M':
    l1 = 1000;
    break;
  default:
    cout<<"Error"<<endl; 
}
    switch(s2) {
  case 'I':
    l2= 1; 
    break;
  case 'V':
    l2 = 5;
    break;
   case 'X':
    l2 = 10;
    break;
     case 'L':
    l2 = 50;
    break;
     case 'C':
    l2 = 100;
    break;
     case 'D':
    l2 = 500;
    break;
     case 'M':
    l2 = 1000;
    break;
  default:
    cout<<"Error"<<endl; 
}
    return l1>=l2?true:false;
}
int evaluate(string &s){
    if(s == "I"){
        return 1; 
    }
    else if(s == "V"){
        return 5; 
    }
    else if(s == "X"){
        return 10; 
    }
    else if(s == "L"){
        return 50; 
    }
    else if(s == "C"){
        return 100; 
    }
    else if(s == "D"){
        return 500; 
    }
    else if(s == "M"){
        return 1000; 
    }
    else if(s == "X"){
        return 10; 
    }
    else if(s == "XX"){
        return 20; 
    }
    else if(s == "XXX"){
        return 30; 
    }
    else if(s == "XL"){
        return 40; 
    }
    else if(s == "L"){
        return 50; 
    }
    else if(s == "LX"){
        return 1; 
    }


}
int main(){

    string s ; 
    cin>>s; 
    int l = s.length(); 
    int i,j; 
    int arr[l],k=l-1;
    for(i = 0 ; i< l ; i++){
        arr[i] = 0; 
    } 
    for(i=l-1;i>=0; i--){
        string ss=""; 
        for( j =l-1 ;check(s[j],s[i]) ; j--){
            ss = ss + s[j]; 
        }
        reverseStr(ss); 
        arr[k] = evaluate(ss);
        k--;  
        i =j; 
    }
    for(i=0;i<l;i++){
        if(arr[i] != 0) { 
            cout<<arr[i]; 
        }
    }


    return 0; 
}