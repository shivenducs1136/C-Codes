#include<bits/stdc++.h>
using namespace std;
/*int maximum (int a,int b, int c){
    if(a>b&&a>c){
        return a; 
    }
    else if(b>a&&b>c){
        return b; 
    }
    else{
        return c; 
    }
}*/
int main(){

    int n; 
    cin>>n; 
    int arr[n]; 
    int i; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int chest = 0, biceps =0, back =0;
    for(i=0;i<n;i++){
        if(i<n)
        chest += arr[i]; 
        i++; 
        if(i<n)
        biceps += arr[i];
        i++; 
        if(i<n)
        back += arr[i]; 
    }
    int t = max(chest,max(biceps,back)); 
    if(t == chest){
        cout<<"chest"<<endl; 
    }
    else if(t == biceps){
        cout<<"biceps"<<endl; 
    }
    else{
        cout<<"back"<<endl;
    }
    return 0; 
}