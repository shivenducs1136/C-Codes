#include<bits/stdc++.h>
using namespace std; 
int main(){

    int a , b; 
    cin>>a>>b; 
    int i,counta=0,countb=0;
    int aa =0 ,bb= 0,draww=0; 
    for(i=1;i<=6;i++){

        aa = i-a; 
        if(aa<0) aa = aa*(-1); 
        bb = i-b; 
        if(bb<0) bb = bb*(-1); 
        if(aa<bb){
            counta++; 
        }
        else if(bb>aa){
            countb++; 
        }
        else{
            draww++; 
        }

    }
    cout<<counta<<" "<<draww<<" "<<countb; 

    return 0; 
}