#include<bits/stdc++.h>
using namespace std; 
int maxy(int a,int b){
    if(a>b){
        return a; 
    }
    else return b; 
}
int main(){
    int n ; 
    cin>>n; 
    vector<int> vec1,vec2; 
    int i,j,k; 
    for(i=0;i<n;i++){
        int t,u; 
        cin>>t;
        vec1.push_back(t); 
        cin>>u;
        vec2.push_back(u);  
    }
    int b = vec1[0]; 
    vec1[0] = maxy(vec1[0],vec2[0]); 
    for(int j =1 ; j< n;j++){
        for(i = vec1[0]; i>=0;i--){
                if(i == vec1[j]){
                    break; 
                }
                else if(i == vec2[j]){
                    vec1[j] = i; 
                }
        } 
    }
    vector<int> vec; 
    for(int i=0;i<vec1.size();i++){
        vec.push_back(vec1[i]); 
    }
    n  = vec1.size(); 
     for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if( vec1[i]<=vec1[i+1] && (i+1)<n){
                int j = vec1[i]; 
                vec1[i] = vec1[i+1]; 
                vec1[i+1] = j; 
            }
        }
    }
    for(int i =0; i< n ;i++){
        if(vec[i]!= vec1[i]){
            cout<<"NO"<<endl; 
            return 0; 
        }
    }
    cout<<"YES"<<endl; 

    return 0; 
}