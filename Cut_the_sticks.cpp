#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n ; 
    cin>>n; 
    int i,j,k; 
    vector<int> vec;  
    int ele; 
    for(i=0;i<n;i++){
        cin>>ele; 
        vec.push_back(ele); 
    } 
    sort(vec.begin(),vec.end()); 
    int l = vec[0],count=0; 
    while(vec[n-1] != 0 ){
        count = 0 ;
        sort(vec.begin(),vec.end()); 
        for(i=0;i<n;i++){
            if(vec[i]!=0){
                l = vec[i];
                break;  
            }
        }
        for(i=0;i<n;i++){
            vec[i]  = vec[i] - l;
            if(vec[i]!=0) 
            count++; 
        }
        cout<<count<<endl ; 

    }
    cout<<"DONE"<<endl; 


    return 0; 
}