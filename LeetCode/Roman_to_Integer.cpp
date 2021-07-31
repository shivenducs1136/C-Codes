// https://leetcode.com/problems/roman-to-integer/

#include<bits/stdc++.h>
using namespace std; 
int main(){


    string s; 
    cin>>s ; 

    int l  = s.size();
    int arr[l-1]; 
    int i ,j ,num = 0 ; 

    for(i=l-1 ; i>=0 ; i--){

        switch(s[i]) {
  case 'I':
    arr[i] = 1; 
    break;
  case 'V':
    arr[i] = 5; 
    break;
     case 'X':
        arr[i] = 10; 

    break;
     case 'L':
        arr[i] = 50; 

    break;
     case 'C':
        arr[i] = 100; 

    break;
     case 'D':
        arr[i] = 500; 

    break;
     case 'M':
        arr[i] = 1000; 

    break;
  default:
    cout<<"ERROR"<<endl ; 
    }
}
for(i=0;i<l-1;i++){
    cout<<arr[i]<<endl; 
}
    for(i=l-1 ; i>=0 ; i--){
        if(arr[i-1]>=arr[i] && i>=0){
            num = arr[i-1] + arr[i] + num;
            cout<<num << " "<<endl; 
        }
        else if( arr[i-1]<arr[i]  && i>=0){
            num = num - arr[i-1]; 
            cout<<num << " "; 
        }
        cout<< endl ; 

    }

    cout<<num<<endl ; 

    return 0; 
}