#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n, q ;
    cin>>n>>q;
    int last_answer=0;  
    while(q--){

        int qq,x,y; 
        cin>>qq>>x>>y; 
        vector<int> vec; 
        int arr[1000]; 
        int idx=0; 
        if(qq == 1){
            idx= ((x^last_answer)%n); 
            arr[idx] = y; 
        }
        else if(qq ==2 ){
            idx = ((x^last_answer)%n); 
            last_answer 

        }


    }
    return 0; 
}