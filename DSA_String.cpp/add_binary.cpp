#include<bits/stdc++.h> 
using namespace std; 
int main(){
    string s1,s2,res; 
    cin>>s1>>s2; 
    int l1= s1.length(); 
    int l2= s2.length();
    int t1=0,t2=0, dec1 =0, dec2=0,k1=0,k2=0; 
    for(int i=l1-1;i>=0;i--){
        t1 = ((int)s1[i] - 48);
        dec1 = dec1 + pow(2,k1)*t1;
        k1++; 
    }
    for(int i=0;i<l2;i++){
        t2 = t2*10 + ((int)s2[i] - 48); 
        dec2 = dec2 + pow(2,k2)*t2;
        k2++; 
    }
   int result = dec1+dec2;
   int y1, sum[l1+l2],l = 0 ;
   for(int i=0;i<l1+l2;i++) sum[i] = 2;
   while(result>=0){
       y1 = result%2; 
        sum[l++]  = y1 ; 
        result = result/2;       
   }
    for(int i=0;i<l1+l2;i++){
        if(sum[i]!=2){
            cout<<sum[i];
        }
    }

    return 0; 
}