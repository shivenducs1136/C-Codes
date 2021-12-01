#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n; 
    vector<vector<int>> vec={{1},{1,1}}; 
    int i=1, j , k;
    
    for(i = 0; i<n;i++){
        int res = pow(11,i); 
        while(res>0){
            vec[i].push_back(res%10);
            res = res/10;  
        }
    }
    
    return 0; 
} 