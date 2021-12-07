// Remove the duplicates; 
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int m; 
    cin>>m; 
    int arr[m]; 
    int i,j,k ; 
    for(i=0;i<m;i++){
        cin>>arr[i]; 
    }
    vector<int> vec; 
    unordered_map<int,bool> mp; 
    for(i=0;i<m;i++){
        cout<<mp.count(arr[i])<<endl; 
        if(mp.count(arr[i])>0){
            continue; 
        } 
        mp[arr[i]] = true; 
        vec.push_back(arr[i]); 
    }
    for(i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
    }
    return 0; 
}